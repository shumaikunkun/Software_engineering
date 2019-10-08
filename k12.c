#include <stdio.h>
#include <stdlib.h>

int strLength(char *str, int n){ return *str++ != '\0' ? strLength(str,n+1) : n; }  //文字列の要素数をポインタを用いて再帰的に求める

int main(){
  char* str = (char *)malloc(sizeof(char)*10);
  char* p = str;  //先頭のポインタをコピー
  scanf("%s",str);
  for(int i=strLength(str,0); i>0; i--){ printf(i>1 ? "%c" : "%c\n", *(p++)); }  //一文字ずつ出力  //最後に改行を出力するために三項演算子
  for(int i=strLength(str,0); i>0; i--){ printf(i>1 ? "%c" : "%c\n", *(--p)); }  //逆から一文字ずつ出力
}
