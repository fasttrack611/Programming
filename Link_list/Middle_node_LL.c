#include<stdio.h> 
#include <stdlib.h>
typedef struct node{
	int val; 
	struct node *next; 
}Node; 

Node *head, *tail; 

int add_Node(int val){

	Node *temp=(Node*)malloc(sizeof(Node));

	temp->next=NULL; 
	temp->val=val; 

	if(head==NULL) {
		head=temp; 
	}
	else{
		Node *cur= head; 
		while(cur->next!=NULL){
		cur=cur->next; 
		}	
		cur->next=temp; 
	}
}

print_List(){
	printf("\n in print_List() \n");
	Node *temp=head;
	while(temp!=NULL){
		printf("Node->%d..\n",temp->val);
		temp=temp->next;
	}	       
}

int Middle_node(){
	Node *slow=head; 
	Node *fast=head;

	for(;fast!=NULL && fast->next!=NULL;){
	slow=slow->next;
	fast=fast->next->next; 
	}

	if(slow!=NULL){
	printf("\n Middle =%d\n",slow->val);
	}
	else{
	printf("\n List is EMpty \n");
	}
}


int main (){

	printf("\n in Main Function \n");
	  for (int i = 10; i <= 80; i += 10) {
        add_Node(i);
    	}
	print_List();
	Middle_node();
}
