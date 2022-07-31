/*
***********************
@Created by e2011220

@Created at 2022-05-18

***********************
*/
#include <stdio.h>
int main(void){
  int a;
  printf("整数値:");scanf("%d",&a);
  for(int i=1;i<=a;i++){
    //三項演算子->printfが毎ループごと実行され処理速度が落ちるのでやめる
    if(i%2!=0)printf("%d ",i);
  }
  return 0;
}
