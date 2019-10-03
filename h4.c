//πの近似値を求めるプログラム
#include <stdio.h>
#include <math.h>
float sum(int n){ return n==1 ? 1 : pow(n,-2)+sum(n-1); }  //再帰で和を求める
int main(){ printf("%f\n",sqrt(sum(10000)*6)); }
