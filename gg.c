#include <stdio.h>
int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d",&a);
	while(a>0){
		a = a/10;
		b = a * 3;
		c = c+b;
		//b++;
		b--;

	}
	printf("%d",c);




}
