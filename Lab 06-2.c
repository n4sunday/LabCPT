#include<stdio.h>
#include<stdlib.h>
struct listnode {
  int data;
  struct listnode *next;
};

typedef struct listnode LN;

void insert_at_back(LN **hptr, int d);
void print(LN *head);
int sum(LN *head);
LN *find_tail(LN *head);

int main(){
  LN *head;
  head=NULL;
  int d;

  printf("Enter: ");
  do{
    scanf("%d", &d);
    if(d > 0){
      	insert_at_back(&head,d);
    }  	
  }while(d > 0);

  printf("=");
  print(head);
  printf("\n=%d", sum(head));

  return 0;
}
void insert_at_back(LN **hptr, int d){
	LN *new_node = (LN*)malloc(sizeof(LN));
	LN *tail;
	new_node->data=d;
	new_node->next=NULL;
	tail=find_tail(*hptr);
	if(tail==NULL)
		*hptr=new_node;
	else
		tail->next=new_node;
	
}

void print(LN *head){
  		while(head!=NULL){
  			printf("%d ",head->data);
  			head=head->next;
		  }
}

int sum(LN *head){
		int num=0;
		while(head!=NULL){
			num=num+head->data;
			head=head->next;
		}
		return num;
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

