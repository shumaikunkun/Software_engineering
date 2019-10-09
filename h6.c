//getc関数とポインタを用いてscanf関数を実装
#include <stdio.h>
#include <stdlib.h>

void myscanf(char* str){ for(int i=0; i<100; i++){ if((*(str+i)=getc(stdin))=='\n') break; }}  //100文字まで格納できる

int main(){
  char* str = (char *)malloc(sizeof(char)*5);
  myscanf(str);
  printf("%s",str);
}
