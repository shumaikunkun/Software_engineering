//構造体の再帰的な参照によってリストを実装          ./a.out  < company.txt
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

  while(scanf("%s %s", a->name, a->email)!=EOF){ a = sub(a); }

  a = head;  //先頭に戻る
  //以下一覧表示の処理
  while(1){
    if(a->next == NULL){
      break;
    }else{
      printf("name=>%s, email=>%s\n", a->name, a->email);
      a = a->next;
    }
  }
}
