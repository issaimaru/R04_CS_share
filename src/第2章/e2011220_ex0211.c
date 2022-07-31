#include <stdio.h>

int main(void){
  int height;
  printf("身長を入力してください:");scanf("%d",&height);
  printf("標準体重は%.1lfです。\n",((double)(height-100)*0.9));

  return 0;
}
