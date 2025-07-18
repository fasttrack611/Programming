#include<stdio.h> 
#include<string.h> 

void cmd_print(){   printf("\n In cmd_print()\n");}
void cmd_help(){    printf("\n In cmd_help()\n");}
void cmd_quit(){    printf("\n In cmd_quit()\n");}
void cmd_display(){ printf("\n In cmd_display)\n");}

struct Command {
	char name[10];
	void (*func)();	
}cmds[]={
	{"help",cmd_help}, 
	{"quit", cmd_quit},
	{"print",cmd_print}, 
	{"display", cmd_display}
};


int main (){

	char input[]="display"; 
	printf("\n In Main ()\n");

	for(int i=0;i<sizeof(cmds)/sizeof(cmds[0]); i++){
		if(strcmp(input,cmds[i].name)==0){
			cmds[i].func();
		}
	}
	return 0; 
}



