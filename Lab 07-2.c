#include<stdio.h>
#include<stdlib.h>
struct song{
  char title[128];
  double duration;
};
typedef struct song Song;

struct listnode{
  Song *sp;
  struct listnode *next;
};
typedef struct listnode LN;

Song *input_song();
void insert(LN **hptr, Song *sp);
LN *find_tail(LN *head);
double sum_duration(LN *head);

int main(){
  Song *sp;
  LN *head=NULL;
  sp=(Song*)malloc(sizeof(Song));
  int i;
  for(i = 0; i < 5; i++){
    sp = input_song();  //malloc, scanf Song in this function
    insert(&head,sp);
  }
	
  printf("=%.2f",sum_duration(head));
  return 0;
}


Song *input_song(){
	Song input,*in;
	in = (Song*)malloc(sizeof(Song));
	fflush(stdin);
 	 scanf("%s",input.title);
 	 scanf("%lf",&input.duration);
 	 *in=input;
 	 return in;
}

void insert(LN **hptr, Song *sp){
  	LN *new_node = (LN*)malloc(sizeof(LN));
	LN *tail;
	new_node->sp = sp;
	new_node->next=NULL;
	tail=find_tail(*hptr);
	if(tail==NULL)
		*hptr=new_node;
	else
		tail->next=new_node;
}

LN *find_tail(LN *head){
  LN *tail;
	if(head==NULL)
		return NULL;
	tail=head;
	while(tail->next!=NULL){
		tail=tail->next;
	}
	return tail;
}

double sum_duration(LN *head){
  float num=0;
		while(head!=NULL){
			num=num+head->sp->duration;
			head=head->next;
		}
		return num;
}

