//ポインタを用いて値を入れ替える
#include <stdio.h>

void exchange(int *x, int *y){
  int* copy;

  printf("copy:%p\n",copy);
  printf("x:%p\n",x);
  printf("y:%p\n",y);

  copy = x;
  printf("copy=x:%p\n",copy);

  x = y;
  printf("x=y:%p\n",x);

  y = copy;
  printf("y=copy:%p\n",y);

}

int main(){
  int x;
  int y;
  printf("Input 2 numbers.\n");
  scanf("%d",&x);
  scanf("%d",&y);
  printf("%d,%d\n",x,y);
  printf("%p,%p\n",&x,&y);
  exchange(&x,&y);
  printf("%d,%d\n",x,y);
  printf("%p,%p\n",&x,&y);
}
