#include<stdio.h>

typedef void (*batteryHandler)();

void lowBattery(){ printf("\n Battery is Low \n"); }
void HighBattery(){ printf("\n Battery is full \n"); }

int main(){

	int battery_level=115; 

	batteryHandler Handler= (battery_level<20) ?  lowBattery :HighBattery;
	Handler(); 
	return 0; 	
}

