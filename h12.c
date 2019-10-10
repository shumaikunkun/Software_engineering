//getcとputcを使って一文字ずつgoods.txtからgoods2.txtにコピーするプログラム
#include <stdio.h>
int main(){
  char c;
  FILE* fin;
  fin=fopen("goods.txt", "r");
  FILE* fout;
  fout=fopen("goods2.txt", "w");
  while((c = getc(fin)) != -1){ putc(c, fout); }
}
