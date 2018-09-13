#include<stdio.h>
#define NUM 5
int sum(int *p,int *q);
int main(){
    int i,a[NUM];
    for(i = 0; i < NUM; i++){
        printf("N%02d:", i + 1);
        scanf("%d", &a[i]);
    }
    printf("=%d\n",sum(&a[0],&a[NUM]));
    return 0;
}
int sum(int *p,int *q){
	int sum=0,i;
	for(i=0; i<q-p; i++){
		sum+=*(p+i);
	}
	return sum;
}


