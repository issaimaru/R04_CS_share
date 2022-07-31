#include <stdio.h>

int main(void){
  int x,y;
  
  puts("２つの整数を入力してください。");
  printf("整数x:");scanf("%d",&x);
  printf("整数y:");scanf("%d",&y);

  printf("平均値の符号を反転した値は%dです。\n",(x+y)/(-2));

  return 0;
}
