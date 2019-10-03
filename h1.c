//ネイピア数を求めるプログラム
#include <stdio.h>
int rec(int n){ return n==0 ? 1 : n*rec(n-1); }  //再帰で階乗を求める関数
float sum(int n){ return n==0 ? 1 : 1.0/rec(n)+sum(n-1); }  //再帰で和を求める
int main(){printf("%f\n", sum(10));}
