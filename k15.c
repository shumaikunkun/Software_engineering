//アロー演算子に書き換える
#include <stdio.h>
#include <stdlib.h>

typedef struct person {
  char name[30];
  char email[40];
} personData;

int main(){
  int i;
  personData *friends, *emailbook;  //メンバのポインタ
  int friendsNum = 3;
  emailbook = (personData*)malloc(sizeof(personData) * friendsNum); friends = emailbook;
  for(i = 0; i < friendsNum; i++){
    printf("What is the name of friend %i?\n", i);
    scanf("%s", friends->name);
    printf("What is the email address of %s?\n", friends->name);
    scanf("%s", friends->email);
    friends++;
  }
  printf("\n");
  friends = emailbook;
  for(i = 0; i < friendsNum; i++){
    printf("Friend %d: %s, ", i, friends->name);
    printf("lives in %s\n", friends->email);
    friends++;
  }
}
