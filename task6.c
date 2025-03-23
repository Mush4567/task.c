#include <stdio.h>
int main(){
	int n = 0;
	int lucky = 1;
	printf("Lucky: ");
	scanf("%d",&n);
	while(n!=0){
		int d = n%10;
		if(d != 4 && d != 7){
			lucky == 0;
			break;
		}
			n /= 10; 
	}
	if("lucky"){

		printf("tivy hajoxak e");
	}else{
		printf("tivy hajoxak chi");
	}
		return 0;

}
