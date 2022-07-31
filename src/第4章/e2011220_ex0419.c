#include <stdio.h>
int main(void){
  int n;
  printf("何個*を表示しますか:");scanf("%d",&n);
  for(int i=1;i<=n;i++){
    putchar('*');
    if(i%5==0)puts("");//printfは重い
  }
  return 0;
}
