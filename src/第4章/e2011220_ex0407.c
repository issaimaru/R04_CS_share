/*
***********************
@Created by e2011220

@Created at 2022-05-18

***********************
*/
#include <stdio.h>
#include <math.h>
int main(void){
  int a;
  printf("正の整数を入力してください:");scanf("%d",&a);
  for(int i=1;a>1;i++,a=a/2){
    printf("%d ",(int)(pow(2.0,(double)i)));
  }
  return 0;
}
