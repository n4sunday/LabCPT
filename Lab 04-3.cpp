#include<stdio.h>
#include<stdlib.h>
struct set{
    float factor;
    int amount;
    int values[5];
};
typedef struct set SET;

struct v{
    int k;
    SET set;
};
typedef struct v V;

void input_v(V *p);
int sum(int d[], int len);
float f_v(V *p);

int main(){
    V v;
    input_v(&v);
    printf("f = %.1f", f_v(&v));
    return 0;
}
void input_v(V *p){
	int i;
    printf("k = ");
    scanf("%d",&(*p).k);
    printf("set.factor = ");
    scanf("%f",&(*p).set.factor);
    printf("set.amount = ");
    scanf("%d",&(*p).set.amount);
    printf("set.values = ");
    int *n=(int*)malloc(20);
	for(i=0; i<(*p).set.amount; i++){
    	scanf("%d",&(*p).set.values[i]);
	}
}
int sum(int d[], int len){
	int i,t;
	t=0;
	for(i=0; i<len; i++){
		t=t+d[i];
	}
     return t;
}
float f_v(V *p){
    float f=0;
	f=(*p).k+((*p).set.factor*sum((*p).set.values,(*p).set.amount));
	return f;
}

