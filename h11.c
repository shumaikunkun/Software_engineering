//getcを用いて文字数を求めるプログラム     ./a.out < english.txt
#include <stdio.h>
int main(){
  int i=0;
  while((getc(stdin)) != -1){
    i++;
  }
  printf("%d\n",i);
}
