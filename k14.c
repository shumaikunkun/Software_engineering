//構造体の基礎  //リダイレクションでファイルを読み込むため、 ./a.out  < goods.txt で実行
#include <stdio.h>

struct goods{
  char code[10];
  char name[40];
  int price;
};

int main(){
  int i=0;
  struct goods items[4];
  while( scanf("%s %s %d", items[i].code, items[i].name, &(items[i].price)) != EOF){ i++; }
  for (int i=0; i<4; i++){printf("商品コード: %s\n商品名: %s\n値段: %d\n\n",items[i].code, items[i].name, items[i].price);}
}
