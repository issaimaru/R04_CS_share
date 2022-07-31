#include <stdio.h>
#define PI 3.14159265358979323846

int main(void){
  double rad;
  printf("半径は:");scanf("%lf",&rad);
  printf("円の面積は%lfです。",(rad*rad*PI));

  return 0;
}
