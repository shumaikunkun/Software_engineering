#include <stdio.h>

int rec(int n){ return n==0 ? 1 : n*rec(n-1); }

int main(){
  //int max=10;
  printf("%d\n",rec(4));
}
