#include <stdio.h>
int main(){
  char s[9] = "Software";
  *(s+4)='W';  //文字列じゃなくて文字なのでシングルクオート
  printf("s: %s\n", s);
}
