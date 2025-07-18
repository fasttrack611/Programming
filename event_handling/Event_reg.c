#include<stdio.h> 

typedef void (*EventHandler)();

EventHandler registHandler=NULL; 

void registerEvent(EventHandler handler){

	printf("\n iN function registerEvent()\n");
	registHandler=handler;
}

void onMotionDet(){
	printf("\n iN function onMotionDet()\n");
}

void triggerEvent(){

	if(registHandler)
		registHandler();
}

int main(){

	printf("\n iN function Main()\n");

	registerEvent(onMotionDet);

	triggerEvent();
}

