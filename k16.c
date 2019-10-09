//構造体のネストを実装       ./a.out  < company.txt
#include <stdio.h>
#include <stdlib.h>

typedef struct person {
  char name[30];
  char email[40];
} personData;

typedef struct company {
  personData ceo;
  personData employees[100];
} companyData;

int main(){
  companyData c[1];  //会社は一つ
  scanf("%s %s", c[0].ceo.name, c[0].ceo.email);
  int i=0;
  while( scanf("%s %s", c[0].employees[i].name, c[0].employees[i].email) != EOF){ i++; }
  printf("社長の名前は%s、メアドは%s\n", c[0].ceo.name, c[0].ceo.email);
  for(int i=0; i<4; i++){ printf("社員%dの名前は%s、メアドは%s\n", i, c[0].employees[i].name, c[0].employees[i].email); }
}
