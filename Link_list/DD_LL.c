#include<stdio.h> 
#include <stdlib.h>

typedef struct node {
	int val; 
	struct node *next;
	struct node *prev;
}Node;

Node *head=NULL; 
Node *tail=NULL; 

void add_node(int val ){

	Node *temp, *cur; 

	temp=(Node*)malloc(sizeof(Node));
		
	temp->val=val; 
	temp->next=NULL; 
	temp->prev=NULL; 

	if(head==NULL){
		head=temp;
		tail= temp; 
	}
	else{
		tail->next=temp; 
		temp->prev=tail;
		tail=temp;
	}
}


void Rev_list(){
	Node *temp, *cur, *save_next;

	if(head==NULL) return;

	if(head==NULL || tail==NULL)
		return; 	


	for(cur=head; cur!=NULL;){
	
		printf("Cur->val=%d",cur->val);

		temp=cur->next; 
		save_next=cur->next; 

		cur->next=cur->prev; 
		cur->prev=temp; 
		cur=save_next; 
	}
	temp=head; 
	head=tail; 
	tail=temp; 
}




void print_List(){

	Node *temp; 
	printf("In print_List Moduel \n");
	for(temp=head;temp!=NULL; temp=temp->next){
	printf("List-->=%d\n",temp->val);
	}	
}

int main (){
	
	printf("In Main Moduel \n");

	add_node(10);
	add_node(20);
	add_node(30);
	add_node(40);
	add_node(50);
	add_node(60);
	add_node(70);
	add_node(80);
	print_List(); 

	Rev_list();
	print_List(); 
	return 0; 

}
