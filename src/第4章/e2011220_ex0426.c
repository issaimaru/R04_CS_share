#include <stdio.h>

void pmGenerator(int num,int row){
  int inv=0;
  if(row%2==0)inv=1;
  for(int i=0;i<num;i++){
    if((i+inv)%2==0)putchar('+');
    else putchar('-');
  }
  putchar('\n');
}

int main(void){
  int no,width,i;
  printf("何個表示しますか:");scanf("%d",&no);
  printf("何個ごとに改行しますか:");scanf("%d",&width);

  for(i=1;i<=(no/width);i++){
    pmGenerator(width,i);
  }
  pmGenerator(no%width,i);

  return 0;
}
