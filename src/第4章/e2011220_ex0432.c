#include <stdio.h>

int main(void){
  int num;
  puts("下向き数字ピラミッドを作ります。");
  printf("何段ですか:");scanf("%d",&num);
  for(int i=1;i<=num;i++){
    for(int k=1;k<i;k++)putchar(' ');
    for(int j=1;j<=(num-i)*2+1;j++){
      printf("%d",i%10);
    }
    putchar('\n');
  }
}
