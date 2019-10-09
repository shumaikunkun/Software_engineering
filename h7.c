//二次元配列をポインタで表現
#include <stdio.h>
#include <stdlib.h>
//3*4の二次元配列
#define ROW 3
#define COL 4

int main(){
  int arr[ROW][COL];

  // printf("%p\n",arr);  //arr[0] p
  // printf("%p\n",arr+1);
  // printf("%p\n",arr+2);
  // printf("\n");
  // printf("%p\n",*arr);  //arr[0][0] p
  // printf("%p\n",*arr+1);  //arr[0][1] p
  // printf("%p\n",*arr+2);
  // printf("%p\n",*arr+3);
  // printf("%p\n",*(arr+1));
  // printf("%p\n",*(arr+1)+1);
  // printf("%p\n",*(arr+2)+2);
  // printf("%p\n",*(arr+2)+3);
  // printf("\n");
  // printf("%d\n",**arr);
  // printf("%d\n",*(*(arr+2)+2)); //arr[2][2]

  for(int i=0; i<ROW; i++){
    for(int j=0; j<COL; j++){
      *(*(arr+i)+j)=10;
    }
  }

  for(int i=0; i<ROW; i++){
    for(int j=0; j<COL; j++){
      printf("%d\n",*(*(arr+i)+j));
    }
  }
}
