#include<stdio.h>                                                                                                                                                                         
#define LEN 5
int* find_max(int *p, int *q);
int main(){
  	int d[LEN],i,*s;
  	for(i=0; i<LEN; i++){
  		printf("N%02d: ",i+1);
    	scanf("%d", &d[i]);	
	}
  	for(i=0; i<LEN; i++){ 
  		while(d[i]<0){
  			printf("Number < 0\n");
    		printf("N%02d: ",i+1);
    		scanf("%d", &d[i]);
		}
	}  
  	printf("= ");
  	s=find_max(&d[0],&d[4]);
  	for(i=0; i<LEN; i++){
  		printf("%d ",*(s+i));
	}
  	return 0;
}
int* find_max(int *p, int *q){
	int i,j,t;
	for(i=0; i<=q-p; i++){
		for(j=0; j<=q-p; j++){
			if(*(p+i)>*(p+j)){
				t=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=t;
			}
		}
	}
	return p;
}

