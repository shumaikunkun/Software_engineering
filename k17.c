//構造体の再帰的な参照によってリストを実装          ./a.out  < company.txt
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

  while(scanf("%s %s", a->name, a->email)!=EOF){
    a->next = (node*)malloc(sizeof(node));  //次の領域を確保
    a = a->next;  //次の領域に移動
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
