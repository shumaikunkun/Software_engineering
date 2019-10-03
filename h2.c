//累乗を求めるプログラム
#include <stdio.h>
double power(int n, int m){ return m==0 ? 1 : m>0 ? power(n,m-1)*n : power(n,m+1)/n ; }  //負数乗でも対応
int main(){ printf("%f\n", power(2,-3)); }
