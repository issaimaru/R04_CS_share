#include <stdio.h>

int main(void){
  int width;
  puts("左下直角二等辺三角形を作ります。");
  printf("短辺:");scanf("%d",&width);

  for(int j=1;j<=width;j++){
    for(int i=j;i<width;i++)putchar(' ');
    for(int k=width;k>width-j;k--){
      putchar('*');
    }
    putchar('\n');
  }
  
  return 0;
}
