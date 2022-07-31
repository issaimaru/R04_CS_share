#include <stdio.h>

//printfは重いから極力使わない(対して変わらないけど)

int main(void){
  double a,b;
  
  puts("2つの実数を入力してください。");
  printf("実数a:");scanf("%lf",&a);
  printf("実数b:");scanf("%lf",&b);
  printf("aの値はbの%lf%%です。",(a/b)*100.0);

  return 0;
}
