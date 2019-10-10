//構造体の再帰的な参照によって実装されたリストに新たな要素を挿入
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  char name[50];
  char email[80];
  struct node* next;
} node;

node* sub(node* a){ return a->next = (node*)malloc(sizeof(node)); }  //次の領域を確保し、そのポインタを返す

int main(){
  node *a, *head;
  a = (node*)malloc(sizeof(node));
  head = a;  //先頭ポインタをメモ
  FILE *fp;
  fp = fopen("company.txt", "r");
  FILE *fp_add;
  fp_add = fopen("add.txt", "r");  //追加用のデータファイル

  int n;
  printf("何番目にデータを挿入しますか？(0-5)\n");
  scanf("%d",&n);  //追加するインデックスを入力
  
  if(n==0){  //0番目だった時の挿入処理
    fscanf(fp_add, "%s %s", a->name, a->email);
    a = sub(a);  //次の領域に移動
  }
  int i = 0;
  while(fscanf(fp, "%s %s", a->name, a->email)!=EOF){
    a = sub(a);  //次の領域に移動
    if((++i)==n){  //1-5番目の場合の挿入処理, iをインクリメント
      fscanf(fp_add, "%s %s", a->name, a->email);
      a = sub(a);  //次の領域に移動
    }
  }

  a = head;  //先頭に戻る
  //以下一覧表示
  while(1){
    if(a->next == NULL){
      break;
    }else{
      printf("name=>%s, email=>%s\n", a->name, a->email);
      a = a->next;
    }
  }
}
