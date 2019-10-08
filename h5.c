//puts関数とポインタを用いてprintf関数を実装
#include <stdio.h>
#include <stdlib.h>

int strLength(char *str, int n){ return *str++ != '\0' ? strLength(str,n+1) : n; }  //文字列の要素数をポインタを用いて再帰的に求める

void myprintf(char* str){
  char* p = str;  //先頭ポインタのコピー
  for(int i=0; i<strLength(str,0); i++) printf("%c",*p++);
}

int main(){
  char* str = (char *)malloc(sizeof(char)*10);
  scanf("%s",str);
  myprintf(str);
}
