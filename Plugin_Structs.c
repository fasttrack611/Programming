#include<stdio.h> 

typedef struct {
	const char *name; 
	void (*fptr)();
} Plugin;

void plugin1(){ printf("In Module-->Plugin 1 \n");}
void plugin2(){ printf("In Module-->Plugin 2 \n");}

int main(){

	Plugin Plugins[]={
		{"Tata. Tech", plugin1},
		{"Birla. Soft", plugin2}
	};

	for(int i=0; i<2;i++){
		printf("\n  Plugins :: %s \n",Plugins[i].name);
		Plugins[i].fptr();
	}
	return 0; 
}
