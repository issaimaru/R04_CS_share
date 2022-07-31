#include <stdio.h>

int main(void){
  int width;
  puts("右上直角二等辺三角形を作ります。");
  printf("短辺:");scanf("%d",&width);

  for(int j=width;j>=1;j--){
    for(int i=j;i<width;i++)putchar(' ');
    for(int k=1;k<=j;k++){
      putchar('*');
    }
    putchar('\n');
  }

  return 0;
}





