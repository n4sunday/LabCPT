#include<stdio.h>
#include<string.h>
void replace_space(char *s, char c);

int main(){
	char a[20],c,*p;
    printf("Enter: ");
    gets(a);
    p=a;
    printf("Char: ");
    scanf("%c",&c);
    replace_space(p,c);
    printf("= %s",p);
    return 0;
}
void replace_space(char *s, char c){
	int i;
	for(i=0; i<strlen(s); i++){
		if(*(s+i)==' '){
			*(s+i)=c;
		}
	}
}
    

