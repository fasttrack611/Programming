#include<stdio.h> 
#include <stdlib.h>

typedef struct node{
int val; 
struct node *next;
}Node;

Node *head,*temp, *tail=NULL; 

void addNode(int val){

	Node *temp=(Node*)malloc(sizeof(Node));
	temp->val=val; 
	temp->next=NULL; 

	if(head==NULL){
		head=temp; 
		tail=temp;
	}	
	else{
		tail->next=temp; 	
		tail=temp;
	}	
}

int printList(Node *head){
	Node *temp=head;

	if(head==NULL){
		printf("List is empty.\n");
		return 0; 
	}
	
	while(temp!=NULL){
	printf("Node->data=[%d]\n",temp->val); 
	temp=temp->next; 
	}
	return 0; 
}

Node* Rev_recursive(Node* root) {
    if (root == NULL || root->next == NULL) {
        printf("New head is %d\n", root ? root->val : -1);
        return root;
    }

    Node* newHead = Rev_recursive(root->next);
    printf("Linking %d -> %d\n", root->next->val, root->val);

    root->next->next = root;
    root->next = NULL;

    return newHead;
}

/*
Node* Rev_recursive(Node* root) {
	
	printf("\n In reversLink\n");
    if (root == NULL || root->next == NULL) {
	printf("New head is %d\n", root->val);
        return root; // Base case: return last node (new head)
    }

    Node* newHead = Rev_recursive(root->next);  // Recurse to tail
    root->next->next = root;  // Point next node back to current
    root->next = NULL;        // Break the original forward link

    return newHead; // Return new head to bubble up
}
*/

Node* reverseList(Node *head) {
    Node *p = NULL, *q = head, *r = NULL;

    while (q != NULL) {
        r = q->next;
        q->next = p;
        p = q;
        q = r;
    }

    head=p; 
    return p; // new head
}



int reversLink(){

	Node *p,*q,*r;

	printf("\n In reversLink\n");
	if(head==NULL)	return 0; 

	p=head; 
	q=p->next;
	p->next=NULL; 

	while(q!=NULL){

		r=q->next; 
		q->next=p; 
		p=q;
		q=r; 
	}
	head=p; 
 return 0;
}

int main (){


	addNode(10);
	addNode(20);
	addNode(30);
	addNode(40);
	addNode(50);
	addNode(60);
	addNode(70);
	addNode(80);

	printList(head);
//	reversLink();
//	reverseList(head);
//	Rev_recursive(head);
	head = Rev_recursive(head);
	printList(head);
	return 0; 
}
