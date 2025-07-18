#include<stdio.h> 

typedef (*TimerCallbcak)(void);

TimerCallbcak timerHandler=NULL; 

void registerTimerCallbk(TimerCallbcak cb){
	timerHandler=cb;
	printf("\n in registerTimerCallbk...\n ");
}

void blinkled(){
	printf("\n in LED toggle by timer interrupt ..\n ");
}

void timerISR(){

	printf("\n in timerISR....\n ");
	if(timerHandler){
	timerHandler();	
	}
}


int main(){

	registerTimerCallbk(blinkled);

	for(int i=0; i<10; i++){
	sleep(1);
	timerISR(); 
	}

	return 0; 
}
