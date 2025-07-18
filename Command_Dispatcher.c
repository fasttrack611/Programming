#include<stdio.h> 


void start() 	{ printf("\t  in Module Start ");}
void help()	{ printf("\t  in Module Help ");}
void init()	{ printf("\t  in Module init ");}
void command()	{ printf("\t  in Module Command ");}
void stop()	{ printf("\t  in Module Stop ");}
void release()	{ printf("\t  in Module release \n");}

typedef struct {
	const char *cmd_name; 
	void (*fptr)(); 
}Command;

int main(){

	Command cmd[]={
			{ "start", start}, 
			{ "help", help}, 
			{ "init", init}, 
			{ "command", command}, 
			{ "stop", stop}, 
			{ "release", release} 
		};

	printf("\n In Main()\n");

	for(int i=0; i<6; i++){

		printf("\n cmd.cmd_name	= %s", cmd[i].cmd_name);
		cmd[i].fptr(); 	
	}
	return 0; 
}
