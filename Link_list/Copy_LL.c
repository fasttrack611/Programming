#include<stdio.h> 
#include <stdlib.h>

typedef struct node{
	int val; 
	struct node *next; 
}Node;

Node *head=NULL;

// Function to add node to original list
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

Node * Copy_Link_List(Node *orig_head){

	if(orig_head==NULL)
	    return NULL; 

	Node *new_head=NULL; 
	Node *new_tail=NULL;

	Node *cur=orig_head;
	while(cur!=NULL){
	Node *temp=(Node *)malloc(sizeof(Node));
	     temp->next=NULL; 
     	     temp->val=cur->val;
	
	     if(new_head==NULL){
	      new_head=temp; 
	      new_tail=temp; 
	      }
	     else {
	    new_tail->next=temp; 
	    new_tail=temp; 
	     }
	    cur=cur->next;  
	}
	return new_head;
}


int compare_lists(Node *list1, Node *list2) {
    int index = 0;

    while (list1 != NULL && list2 != NULL) {
        if (list1->val != list2->val) {
            printf("Mismatch at node %d: %d != %d\n", index, list1->val, list2->val);
            return 0;
        }

        if (list1 == list2) {
            printf("Shallow copy detected at node %d (same memory address)\n", index);
            return 0;
        }

        list1 = list1->next;
        list2 = list2->next;
        index++;
    }

    if (list1 != NULL || list2 != NULL) {
        printf("Lists are of unequal length\n");
        return 0;
    }

    printf("✅ Lists match and are distinct in memory\n");
    return 1;
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

	int count=0;
	printf("\n in main function ...\n");
	for(int i=10; i<100; i+=10){
	printf("\n in loopmain function ...\n");
	add_node(i);
	}

	Node *New_list=Copy_Link_List(head);

	int result = compare_lists(head, New_list);

	while(New_list!=NULL){ 
	printf(" Count =%d..Node=%d\n",count++, New_list->val);
	New_list=New_list->next;
	}
	//print_Node();
	return 0; 
}
