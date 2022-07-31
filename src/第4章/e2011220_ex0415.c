/*
***********************
@Created by e2011220

@Created at 2022-05-18

***********************
*/
#include <stdio.h>
int main(void){
  int a;
  printf("正の整数を入力してください:");scanf("%d",&a);
  for(int i=1;i<=a;i++)printf("%d",i%10);
  return 0;
}
