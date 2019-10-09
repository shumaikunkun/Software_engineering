//二次元配列をポインタで表現
#include <stdio.h>
#include <stdlib.h>
//3*4の二次元配列
#define ROW 3
#define COL 4

int main(){
  int arr[ROW][COL]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  for(int i=0; i<ROW; i++){
    for(int j=0; j<COL; j++){
      printf("%d\n",arr[i][j]);
    }
  }
}
