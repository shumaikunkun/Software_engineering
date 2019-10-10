//構造体の再帰的な参照によって実装されたリストに新たな要素を挿入
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  char name[50];
  char email[80];
  struct node* next;
} node;

int main(){
  node *a, *head;
  a = (node*)malloc(sizeof(node));
  head = a;  //先頭ポインタをメモ
  FILE *fp;
  fp = fopen("company.txt", "r");
  FILE *fp_add;
  fp_add = fopen("add.txt", "r");  //追加用のデータファイル

  int n;
  printf("何番目にデータを挿入しますか？\n");
  scanf("%d",&n);  //追加するインデックスを入力

  int i=0;
  if(n==0){  //0番目だった時の挿入処理
    fscanf(fp_add, "%s %s", a->name, a->email);
    a->next = (node*)malloc(sizeof(node));  //次の領域を確保
    a = a->next;  //次の領域に移動
  }
  while(fscanf(fp, "%s %s", a->name, a->email)!=EOF){
    a->next = (node*)malloc(sizeof(node));  //次の領域を確保
    a = a->next;  //次の領域に移動
    i++;
    if(i==n){  //挿入処理
      fscanf(fp_add, "%s %s", a->name, a->email);
      a->next = (node*)malloc(sizeof(node));  //次の領域を確保
      a = a->next;  //次の領域に移動
    }
  }

  a = head;  //先頭に戻る

  while(1){
    if(a->next == NULL){
      break;
    }else{
      printf("name=>%s, email=>%s\n", a->name, a->email);
      a = a->next;
    }
  }
}
