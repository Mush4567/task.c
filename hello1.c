#include <stdio.h>
int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d",&a);
	int a1 = a;
	while(a>0){
		a=a/10;
		b++;
	}
	for(int i = 0;i<b;i++){
		c = a1%10;
		a1 = a1/10;
		printf("%d",c);

	}
	printf("\n");
	return 0;
}
