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
  node* a = (node*)malloc(sizeof(node));
  node* head = a;  //先頭ポインタをメモ
  FILE* fp = fopen("company.txt", "r");
  FILE* fp_add = fopen("add.txt", "r");  //追加用のデータファイル
  printf("何番目にデータを挿入しますか？(0-5)\n");
  int n;
  scanf("%d",&n);  //追加するインデックスを入力

  for(int i=0; i<6; i++){
    fscanf(i==n ? fp_add : fp, "%s %s", a->name, a->email);
    a = sub(a);
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
