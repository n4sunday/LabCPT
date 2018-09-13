#include<stdio.h>
#include<string.h>
char* find_space(char *s);
int main(){
	char c[20],x,*p,*o;
	int i=0,k,n=0;
    printf("Enter: ");
    gets(c);
    printf("Char: ");
    scanf("%c",&x);
    p=c;
    printf(">%s\n",find_space(p));
    while(i<strlen(p)){
		if(*(p+i)==find_space(p)){
			*(p+i)=x;		
		}
		i++;
	}	
//	if(n>0)
 		printf("if=%s",o);
// 	else if(n==o)
 		printf("else=%s",p);

    return 0;
}
char* find_space(char *s){
    int i,n=0;
    char *r;
	for(i=0; i<strlen(s); i++){
		if(*(s+i)==' '){
			return s+i;
		}
	}
//	return NULL;
}	










