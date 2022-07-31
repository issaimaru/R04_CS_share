/*
***********************
@Created by e2011220

@Created at 2022-05-18

***********************
*/
#include <stdio.h>
int main(void){
  int range_min,range_max,width;
  double weight;
  printf("何cmから:");scanf("%d",&range_min);
  printf("何cmまで:");scanf("%d",&range_max);
  printf("何cmごと:");scanf("%d",&width);
  for(int i=range_min;i<=range_max;i+=width){
    weight=((double)i-100.0)*0.9;
    printf("%dcm %5.2lfkg\n",i,weight);
  }
  return 0;
}
