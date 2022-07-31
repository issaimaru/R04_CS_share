#include <stdio.h>
#include <math.h>

int main(void){
  int area;
  printf("面積:");scanf("%d",&area);
  for(int i=1;i<=sqrt(area);i++){
    if(area%i==0){
      printf("%d×%d\n",i,(area/i));
    }
  }
  return 0;
}
