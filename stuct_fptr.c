#include<stdio.h> 

typedef struct {
	void (*init)();
	void (*probe)();
	void (*initilize)();
	void (*shutdown)();
}Plugin; 

void init(){ printf("\n in function Init..\n"); }
void probe(){ printf("\n in function probe..\n"); }
void initilize(){ printf("\n in function initilize..\n"); }
void shutdown(){ printf("\n in function shutdown..\n"); }

int main(){
	Plugin P={ init, probe, initilize, shutdown};

	printf("\n in function Main()\n");

	P.init();
	P.initilize();
	P.probe(); 
	P.shutdown();
}
