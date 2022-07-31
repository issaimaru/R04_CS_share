/*
***********************
@Created by e2011220

@Created at 2022-05-18

***********************
*/
#include <stdio.h>
int main(void){
  int n,sum;
  printf("Nの値:");scanf("%d",&n);
  for(int i=1;i<=n;i++)sum+=i;
  printf("1から%dまでの和は%dです。",n,sum);
  return 0;
}
