#include <stdio.h>
int main(){
	  int a = 0;
	  int b = 0;
	  scanf("%d",&a);
      while(a>0){
          b = a%10;
	  a/=10;
	  printf("%d,",b);
	}
	  printf("\n");
      return 0;




}
