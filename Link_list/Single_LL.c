#include<stdio.h> 
#include<stdlib.h>

typedef struct node {
	int value; 
	struct node *next; 
}mynode;

mynode *head, *tail, *temp; 

void print_List(mynode *Head){

	printf("\n  Adding Node --> ()\n");
	while(Head!=NULL){
	   printf("in printf_list--> Nodes=%d\n",Head->value);
	   Head=Head->next; 
	}
}

void delete_Node(int val) {
    mynode *temp = head, *prev = NULL;

    while (temp != NULL) {
        if (temp->value == val) {
            if (prev == NULL) {
                // Case 1: Deleting the head node
                head = temp->next;
            } else {
                // Case 2: Deleting a middle or tail node
                prev->next = temp->next;
            }

            if (temp == tail) {
                // Case 3: If tail is deleted, update tail
                tail = prev;
            }

            free(temp);
            printf("Deleted node with value %d\n", val);
            return;
        }

        prev = temp;
        temp = temp->next;
    }

    printf("Value %d not found in list.\n", val);
}




int add_node(int value){

	temp= (mynode*)malloc(sizeof(mynode));

	temp->value=value; 
	temp->next=NULL; 

	if(head==NULL){
		head =temp;
		tail =temp;
	}
	else{
		tail->next=temp;	
		tail=temp; 
	}
	return 0; 
}

int main(){

	printf("\n in main ()");
	printf("\n  Adding Node --> ()\n");
	add_node(1);
	add_node(2);
	add_node(7);
	add_node(8);
	add_node(9);
	add_node(10);
	add_node(12);
	print_List(head);
	delete_Node(7);
	print_List(head);
}
