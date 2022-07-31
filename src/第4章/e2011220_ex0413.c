/*
***********************
@Created by e2011220

@Created at 2022-05-18

***********************
*/

#include <stdio.h>
int main(void){
  int a,i;
  printf("正の整数を入力してください:");scanf("%d",&a);
  printf("%dは",a);
  for(i=0;a>0;i++)a=a/10;
  printf("%d桁です。",i);
  return 0;
}
