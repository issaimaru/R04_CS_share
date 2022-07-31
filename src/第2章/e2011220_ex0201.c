#include <stdio.h>
int main(void){
  int x;
  printf("整数を入力してください:");scanf("%d",&x);
  printf("10を加えると%dです。\n\r",x+10);
  printf("10を減じると%dです。\n\r",x-10);
  printf("10を乗じると%dです。\n\r",x*10);
  printf("10で除した商は%dです。\n\r",x/10);
  printf("10で除した剰余は%dです。\n\r",x%10);
  return 0;
}
