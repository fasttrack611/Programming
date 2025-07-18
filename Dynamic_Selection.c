#include<stdio.h> 
#include <string.h>

void alpha(){ printf("\n In alpha\n"); }
void beta(){ printf("\n  In beta\n"); }


typedef void (*PluginFunc)(void);

PluginFunc getPlugin(const char *name){

	if(strcmp(name,"alpha")==0) return alpha;
	if(strcmp(name,"beta")==0) return beta;
	return NULL;
}

int main (){
	PluginFunc selected=getPlugin("beta");

	if(selected)
		selected();

	return 0;
}

