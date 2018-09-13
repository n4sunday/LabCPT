#include<stdio.h>
#define LEN 5
int* max(int *a,int *b);
int main(){
  int d[LEN],i;
  for(i=0; i<LEN; i++){
    printf("N%02d: ",i+1);
    scanf("%d",&d[i]);
  }
  printf("Number Max = %d",*max(&d[0],&d[1]));
  return 0;
}
int* max(int *a,int *b){
	int number,i,j;
	for(i=0; i<LEN; i++){
		for(j=0; j<LEN; j++){
			if(*(a+i)<*(b+j)){
				number=*(b+j);
				*(b+j)=*(a+i);
				*(a+i)=number;
			}
		}
	}
	return a;
}

