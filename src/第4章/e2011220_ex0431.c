#include <stdio.h>

int main(void){
  int num;
  puts("ピラミッドを作ります。");
  printf("何段ですか:");scanf("%d",&num);
  for(int i=1;i<=num;i++){
    for(int k=0;k<((i-1)*2+1);k++){
      putchar('*');
    }
    putchar('\n');
  }

  return 0;
}
