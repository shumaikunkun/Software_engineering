#include <stdio.h>
#include <stdlib.h>
int main(){
  int* p = (int*)malloc(sizeof(int)*5);  //数字５つ分の領域確保
  int* q = p;  //先頭のポインタをメモしとく
  for(int i=0; i<5; i++){ scanf("%d",p++); }  //入力した数字のポインタを格納しインクリメント
  p = q; //先頭ポインタに戻す
  for(int i=0; i<5; i++){ printf("%d\n",*p++); }  //ポインタに対する要素を表示して、ポインタをインクリメント
  p = q;  //解放するにはポインタを先頭に戻す
  free(p);
}
