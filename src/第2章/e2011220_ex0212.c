#include <stdio.h>
#include <math.h>

int main(void){
  double height,weight;
  
  printf("身長を入力してください:");scanf("%lf",&height);
  printf("体重を入力してください:");scanf("%lf",&weight);
  printf("BMIは%.2lfです。\n",(weight)/pow((height/100.0),2.0));

  return 0;
}
