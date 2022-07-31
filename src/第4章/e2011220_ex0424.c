#include <stdio.h>

void compare(int *a,int *b){
  if(*a>*b){
    int save=*a;
    *a=*b;
    *b=save;
  }
}

int main(void){
  puts("横長の長方形を作ります。");
  int a,b;
  printf("一辺(その1):");scanf("%d",&a);
  printf("一辺(その2):");scanf("%d",&b);

  compare(&a,&b);
  
  for(int i=0;i<a;i++){
    for(int k=0;k<b;k++){
      putchar('*');
    }
    putchar('\n');
  }

  return 0;
}
