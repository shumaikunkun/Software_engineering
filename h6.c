//getc関数とポインタを用いてscanf関数を実装
#include <stdio.h>
#include <stdlib.h>

void myscanf(char* str){
  char c;
  for(int i=0; i<10; i++){
    c=getc(stdin);
    if(c=='\n') break;
    *(str+i)=c;
  }
  printf("-------%s\n",str);
}

int main(){
  char* str = (char *)malloc(sizeof(char)*5);
  myscanf(str);
  printf("+++++++%s\n",str);
}
