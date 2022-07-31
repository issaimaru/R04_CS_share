#include <stdio.h>

int main(void){
  int no,width;
  printf("何個*を表示しますか:");scanf("%d",&no);
  printf("何個ごとに改行しますか:");scanf("%d",&width);

  for(int i=1;i<=no;i++){
    putchar('*');
    if((i%width)==0)putchar('\n');
  }

  return 0;
}
