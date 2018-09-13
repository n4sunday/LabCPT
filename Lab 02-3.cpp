#include<stdio.h>
int main(){
	
	int a=10;
	unsigned int a1=11;
	char b='S';
	unsigned char b1='N';
	float c=3.14;
	double d=5.25456789;
	short e=99;
	unsigned short e1=999;
	long f=100;
	unsigned long f1=900;
	
	printf("Value is int: %d 				\n Address = %d\n\n",a,&a);
	printf("Value is unsigned int: %d 		\n Address = %d\n\n",a1,&a1);
	printf("Value is char: %c 				\n Address = %d\n\n",b,&b);
	printf("Value is unsigned char: %c  	\n Address = %d\n\n",b1,&b1);
	printf("Value is float: %f  			\n Address = %d\n\n",c,&c);
	printf("Value is double: %lf  			\n Address = %d\n\n",d,&d);
	printf("Value is short: %d  			\n Address = %d\n\n",e,&e);
	printf("Value is unsigned short: %d  	\n Address = %d\n\n",e1,&e1);
	printf("Value is long: %d  				\n Address = %d\n\n",f,&f);
	printf("Value is unsigned long: %d  	\n Address = %d\n\n",f1,&f1);
	return 0;
}

