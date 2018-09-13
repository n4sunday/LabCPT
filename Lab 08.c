#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int stack[50],top=-1;
void push(int v);
int pop();
int cal(char v);


int main(){
	int i,calculate;
  	char s[128];
	printf("Enter: "); 
	gets(s); 
	fflush(stdin);
	i=0;
	while(i<strlen(s)){
   		if(s[i]<='9'&&s[i]>='0'){
   			 push(s[i]-'0');
		}
		else{
			calculate=cal(s[i]);
		}
   		i++;
   		}
   
   	printf("=%d",calculate);
   	printf("Stack = %d",stack[0]);
	return 0;
}	

void push(int v){
	if(top>50){
		printf("FULL\n");
	}
	top++;
	stack[top]= v;
}

int pop(){
	return stack[top--];
}

int cal(char v){
	int a,b,x;
	b = pop();
	printf("B%d ",b);
	a = pop();
	printf("A%d ",a);
	if(v=='+'){
		x = a+b;
	}else if(v=='-'){
		x = a-b;
	}else if(v=='*'){
		x = a*b;
	}else if(v=='/'){
		x = a/b;
	}else{
		printf("empty\n");
	}
	push(x);
	return x;

}



