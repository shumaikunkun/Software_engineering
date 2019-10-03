// sample 1-3
#include <stdio.h>
int main(){
  char proverb[50];
  printf("What’s your favorite proverb?\n");
  scanf("%s", proverb);
  for (int i=0; i<10; i++) printf("%s\n", proverb);
}
