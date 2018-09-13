#include<stdio.h>
void to_next(char* c);
int main(){
	char c,*p;
	p=&c;
	printf("Enter:");
	scanf("%c",&c);
	if(c>='a'&&c<='z'){
		to_next(p);
	}
	else{
		printf("Not a-z");
	}	
	return 0;
}
void to_next(char* c){
	char t;
	t=*c;
	t=t+1;
	if(t>122){
		t=t-26;
	}
	printf("=%c",t);
	
}

