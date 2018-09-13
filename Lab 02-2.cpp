#include<stdio.h>
#include<string.h>
char* find_char(char s[],int c);
int main(){
	char str[128];
	char c,*x;
	printf("S:");
	gets(str);
	printf("C:");
	scanf("%c",&c);
	x=find_char(str,c);
	printf("=%c",*x);
	return 0;
}
char* find_char(char s[],int c){
	int i;
	char *p;
	p=s;
	for(i=0; i<=strlen(s); i++){
		if(s[i]==c){
			*p=s[i+1];
			break;	
		}		
	}
	return p;
}
