//素因数分解するプログラム
#include <stdio.h>
int main(){
  int id;
  scanf("%d",&id);
  int copy=id;  //終値のためにコピー
  for(int i=2; i<copy/2; i++){ while(id%i==0){ printf((id/=i)==1 ? "%d\n" : "%d*" ,i); }}
}
