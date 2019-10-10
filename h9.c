//構造体の再帰的な参照によって木構造を実装         ./a.out  < company.txt
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
  printf("%s\n",a->name);
  if(n==0){  //葉まで達したらnodeメンバをNULLにして抜ける
    a->next1=NULL;
    a->next2=NULL;
  }else{
    a->next1=sub(fp, a->next1, n-1);
    a->next2=sub(fp, a->next2, n-1);
  }
  printf("----%s\n", a->name);
  return a;  //ポインタを返す
}

int main(){
  node *a, *head;
  a = (node*)malloc(sizeof(node));
  head = a;  //先頭ポインタをメモ

  FILE *fp;
  fp = fopen("tree.txt", "r");

  sub(fp, a, 2);  //深さ２までの木構造
  a = head;  //ポインタを先頭に戻す

  printf("%s\n", a->name);
  printf("%s\n", a->next1->name);
  printf("%s\n", a->next1->next1->name);

}
