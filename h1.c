//ネイピア数を求めるプログラム
#include <stdio.h>

int rec(int n){ return n==0 ? 1 : n*rec(n-1); }

int main(){
  float ans=0;
  for (int i=0;i<10;i++){ ans+=1.0/rec(i); }
  printf("%f\n",ans);
}
