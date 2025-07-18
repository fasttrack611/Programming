#include <stdio.h>
typedef enum { OFF, ON } State;

int add_state(int a, int b ) {
       	printf("in Func add_state \n");
	return (a+b); 
}

int subb_state(int a, int b) {
       	printf("in Func subb_state \n");
	return (a-b); 
}


int main() {
    int (*ifptr)(int,int);
   
       	printf("in Func main \n"); 
   	ifptr=add_state;
	printf("value = %d\n", ifptr(6,7));
   	ifptr=subb_state;
	printf("value = %d\n", ifptr(6,7));
   	ifptr=subb_state;

    return 0;
}
