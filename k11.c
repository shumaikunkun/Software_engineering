#include <stdio.h>
#include <stdlib.h>
int main(){
  char* str = (char *)malloc(sizeof(char)*2);
  char* p = (char *)malloc(sizeof(char)*5);  //文字５つ分の領域確保
  char* q = p;
  for(int i=0; i<5; i++){
    scanf("%s", str);
    *p++ = *str;  //strの一文字目をpに追加していく
  }  
  p = q; //先頭ポインタに戻す
  for(int i=0; i<5; i++){ printf("%c",*p++); }  //ポインタに対する要素を表示して、ポインタをインクリメント
}
