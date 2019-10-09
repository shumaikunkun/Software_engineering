//二次元配列をポインタで表現
#include <stdio.h>
#include <stdlib.h>
//3*4の二次元配列
#define ROW 3
#define COL 4

int main(){
  int** c = (int**)malloc(sizeof(int*)*ROW);
  for(int i=0; i<ROW; i++){ *(c+i) = (int*)malloc(sizeof(int)*COL); }
  for(int i=0; i<ROW; i++){ for(int j=0; j<COL; j++){ *(*(c+i)+j)=10; }}  //全要素に10を代入
  for(int i=0; i<ROW; i++){ for(int j=0; j<COL; j++){ printf("%d\n",*(*(c+i)+j)); }}  //全要素の表示
}
