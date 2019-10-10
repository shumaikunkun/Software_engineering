//構造体の再帰的なメンバ参照によって木構造を実装
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  char name[10];
  struct node* next1;
  struct node* next2;
} node;

node* sub(FILE* fp, node* a, int n){
  a=(node*)malloc(sizeof(node));
  fscanf(fp, "%s", a->name);
  a->next1 = n==0? NULL : sub(fp, a->next1, n-1);  //最深まで到達したら、次のノードへのポインタはNULL
  a->next2 = n==0? NULL : sub(fp, a->next2, n-1);
  return a;  //ポインタを返す
}

int main(){
  FILE *fp;
  fp = fopen("tree.txt", "r");  //構造体にデータを入力するファイル
  node *a;
  a = sub(fp, a, 2);  //深さ２までの木構造, ポインタを戻す

  printf("%s\n", a->name);
  printf("　%s\n", a->next1->name);
  printf("　　%s\n", a->next1->next1->name);
  printf("　　%s\n", a->next1->next2->name);
  printf("　%s\n", a->next2->name);
  printf("　　%s\n", a->next2->next1->name);
  printf("　　%s\n", a->next2->next2->name);
}
