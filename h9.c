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
  if(n==0){  //葉まで達したらnodeメンバをNULLにして抜ける
    a->next1=NULL;
    a->next2=NULL;
  }else{
    a->next1=sub(fp, a->next1, n-1);
    a->next2=sub(fp, a->next2, n-1);
  }
  return a;  //ポインタを返す
}

int main(){
  FILE *fp;
  fp = fopen("tree.txt", "r");
  node *a;
  a = sub(fp, a, 2);  //深さ２までの木構造, ポインタを戻す

  printf("1.%s\n", a->name);
  printf("2.%s\n", a->next1->name);
  printf("3.%s\n", a->next1->next1->name);
  printf("4.%s\n", a->next1->next2->name);
  printf("5.%s\n", a->next2->name);
  printf("6.%s\n", a->next2->next1->name);
  printf("7.%s\n", a->next2->next2->name);
}
