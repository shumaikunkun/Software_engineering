//getcとputcを使って一文字ずつgoods.txtからgoods2.txtにコピーするプログラム
#include <stdio.h>
int main(){
  char c;
  FILE* fin = fopen("goods.txt", "r");
  FILE* fout = fopen("goods2.txt", "w");
  while((c = getc(fin)) != -1){ putc(c, fout); }
}
