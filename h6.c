//getc関数とポインタを用いてscanf関数を実装
#include <stdio.h>
#include <stdlib.h>

//int strLength(char *str, int n){ return *str++ != '\0' ? strLength(str,n+1) : n; }  //文字列の要素数をポインタを用いて再帰的に求める

void myscanf(char* str){
  //char* p = str;  //先頭ポインタのコピー
  char c;
  char* p;
  for(int i=0; i<5; i++){
    //c=getc(stdin);
    printf("%p\n",&c);
    printf("%c\n",c);
    //str=c;
    (&c)++;

    // *p=c;
    // printf("%p\n",p);
    // printf("%c\n",*p);

    //str=p

    //p++;



    //printf("%p\n",str++);
    //printf("%c\n",*str);
  }

  printf("-------%s\n",str);
  //for(int i=0; i<strLength(str,0); i++) printf("%c",*p++);
}

int main(){
  char* str = (char *)malloc(sizeof(char)*5);
  myscanf(str);
  printf("+++++++%s\n",str);
}
