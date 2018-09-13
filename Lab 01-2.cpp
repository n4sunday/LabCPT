#include<stdio.h>
int main(){
	int x,i;
	for(i=0; i<10; i++){
		printf("T0%d:",i+1);
		scanf("%d",&x);
		
		if(x==50){
			printf("=Victory\n");
			break;
			}
		else if(x>50-4&&x<50+4)
			printf("=Very Close\n");
		else if(x>50)
			printf("=Too large\n");
		else
			printf("=Too small\n");
	}
	printf("=Game Over");
}
