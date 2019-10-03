//sinとcosを求めるプログラム
#include <stdio.h>
#include <math.h>

int rec(int n){ return n==0 ? 1 : n*rec(n-1); }
float mysin(float x, int n){ return n==0 ? x : mysin(x,n-1)+pow(-1,n)*pow(x,2*n+1)/rec(2*n+1); }
float mycos(float x, int n){ return n==0 ? 1 : mycos(x,n-1)+pow(-1,n)*pow(x,2*n)/rec(2*n); }

int main(){
  float arg=3.141592653589 / 3;
  printf("sin(%f)=>%f\n", arg, mysin(arg, 10));  //第二引数はループ数（大きいほど精度が上がる）
  printf("cos(%f)=>%f\n", arg, mycos(arg, 10));
}
