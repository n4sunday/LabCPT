#include<stdio.h>
int main(){
	FILE *fp;
	int n=0,i,sum=0;
	int num[10];
	fp=fopen("num.txt","r");
	for(i=0; !feof(fp); i++){
		fscanf(fp,"%d",&num[i]);
		printf("%d\n",num[i]);
		n++;
	}
	fclose(fp);
	for(i=0; i<n; i++){
		sum=sum+num[i];
	}
	printf("=%d",sum);
	return 0;
}

