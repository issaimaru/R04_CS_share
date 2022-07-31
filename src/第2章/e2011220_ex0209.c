#include <stdio.h>

//printfは重いから極力使わない(対して変わらないけど)

int main(void){
  int a,b;

  puts("2つの実数を入力してください。");
  printf("実数a:");scanf("%d",&a);
  printf("実数b:");scanf("%d",&b);
  printf("aの値はbの%lf%%です。",((double)a/(double)b)*100.0);

  return 0;
}
