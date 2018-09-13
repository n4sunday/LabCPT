#include<stdio.h>
char enc_char(char c);
int check_char(char c);  
int main(){
	int x;
	char ch[13],ct[13];
	for(x=0; x<13; x++){	
		ch[x]=getchar();
		fflush(stdin);
		check_char(ch[x]);
		ct[x]=enc_char(ch[x]);
	}
	printf("%s\n",ch);
	printf("%s\n",ct);
	return 0;
}
int check_char(char c){
	if(c>='A'&&c<='Z')
		c=1;
	else if(c>='a'&&c<='z')
		c=0;
	else
		c=-1;
	return c;
}
char enc_char(char c){
	int cs = check_char(c);
	if(cs==1){
		c=(c*1)-1;
		if(c<65)
			c=c+26;
	}
	else if(cs==0){
		c=(c*1)+2;
		if(c>122)
			c=c-26;	
	}
	return c;
}
