#include <stdio.h>

int main(void){
  int upper,botter,hight;
  puts("台形の面積を求めます。");
  printf("上辺:");scanf("%d",&upper);
  printf("下辺:");scanf("%d",&botter);
  printf("高さ:");scanf("%d",&hight);
  printf("面積は%lfです。\n",((double)(upper+botter)*(double)hight)/2.0);

  return 0;
}
