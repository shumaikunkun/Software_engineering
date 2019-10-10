//getcを用いて文字数を求めるプログラム     ./a.out < english.txt
#include <stdio.h>
int count(int i){ return (getc(stdin) != -1)? count(i+1) : i; }  //再帰的に単語数を数える
int main(){ printf("%d\n",count(0)); }  //カウントは0から始める
