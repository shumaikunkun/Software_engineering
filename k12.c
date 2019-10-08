#include <stdio.h>
#include <stdlib.h>

int strLength(char *str){
  int n = 0;
  while( *str++ != '\0'){ n++; }
  return n;
}

int main(){
  char* str = (char *)malloc(sizeof(char)*10);
  char* p = str;  //先頭のポインタをコピー
  scanf("%s",str);

  //printf("%d\n",strLength(str));  //引数はポインタ

  for(int i=strLength(str); i>0; i--){ printf(i>1 ? "%c" : "%c\n", *(p++)); }  //一文字ずつ出力
  for(int i=strLength(str); i>0; i--){ printf(i>1 ? "%c" : "%c\n", *(--p)); }  //逆から一文字ずつ出力
}
