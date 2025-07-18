#include<stdio.h> 

void greet(){
	printf("\n in Module greet()\n");
}





int main(){

	void (*fp)()=greet; 
	printf("\n in main Func\n");
	fp();
	return 0; 
}
