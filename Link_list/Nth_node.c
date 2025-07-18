#include<stdio.h> 
#include <stdlib.h>

typedef struct node{
	int val; 
	struct node *next; 
}Node;

Node *head=NULL;

int add_node(int val){

	Node *temp=(Node*)malloc(sizeof(Node));
	temp->next=NULL; 
	temp->val=val; 

	if(head==NULL){
		head=temp; 
	}
	else {
		Node *cur=head; 
		while(cur->next!=NULL){
			cur=cur->next; 
		}
		cur->next=temp;
	}

}

int print_Nth_node_frm_END(int val){

	Node *first=head; 
	Node *sec=head; 

	for(int i=0; i<val;i++){
		if(first==NULL){
			printf("List is shirter that the length \n");
		}
		first=first->next; 	
	} 

	while(first!=NULL){
		first=first->next; 	
		sec=sec->next; 	
	}

	if(sec!=NULL){
		printf("The %d-th node from the end is: %d\n", val, sec->val);
	} else {
		printf("Node not found\n");
	}
	return 0; 
}
int print_Node(){

	Node *cur=head;
	printf("\n in Print_Node function ...\n");

	if(cur==NULL){
	printf("\n  List is Empty  ...\n");
	}
	int count=0; 

	while(cur!=NULL){
	printf(" Count =%d..Node=%d\n",count++, cur->val);
	cur=cur->next;
	}
	return 0; 
}

int main(){

	printf("\n in main function ...\n");

	for(int i=10; i<100; i+=10){
	printf("\n in loopmain function ...\n");
	add_node(i);
	}
	print_Node();


	print_Nth_node_frm_END(3);

	return 0; 

}
