#include <stdio.h>

typedef struct { 
   void (*print)(const char*);  
} Printer; 

void my_printf(const char *msg){
	
	printf("\n in fun my_printf :: %s \n", msg);
}


int main() {

       Printer P ={ my_printf };

	printf("\n in Main()  \n");
    	P.print("Hello from Printer\n");
	return 0;
}
