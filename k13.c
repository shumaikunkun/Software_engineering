//ポインタを用いて値を入れ替える
#include <stdio.h>

void exchange(int *x, int *y){
  int *copy;
  *copy = *x;
  *x = *y;
  *y = *copy;
}

int main(){
  int x, y;
  printf("Input 2 numbers.\n");
  scanf("%d",&x);
  scanf("%d",&y);
  printf("Before exchange, x=%d,y=%d\n",x,y);
  exchange(&x,&y);
  printf("After exchange, x=%d,y=%d\n",x,y);
}
