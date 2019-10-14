//アロー演算子に書き換える
#include <stdio.h>
#include <stdlib.h>

typedef struct person {
  char name[30];
  char email[40];
} personData;

int main(){
  int friendsNum = 3;
  personData* emailbook = (personData*)malloc(sizeof(personData) * friendsNum);
  personData* friends = emailbook;
  for(int i = 0; i < friendsNum; i++){
    printf("What is the name of friend %i?\n", i);
    scanf("%s", friends->name);
    printf("What is the email address of %s?\n", friends->name);
    scanf("%s", friends->email);
    friends++;
  }
  friends = emailbook;
  for(int i = 0; i < friendsNum; i++){
    printf("Friend %d: %s, lives in %s\n", i, friends->name, friends->email);
    friends++;
  }
}
