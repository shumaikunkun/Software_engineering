//再帰で階乗をを求めるプログラム
#include <stdio.h>

int rec(int n){ return n==0 ? 1 : n*rec(n-1); }

int main(){
  int id;
  scanf("%d",&id);
  printf("%d\n",rec(id));
}
