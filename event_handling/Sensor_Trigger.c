#include<stdio.h>

typedef void (*sensorCallback)(int);

void onSensorTrigger(int data){

	printf("\n In mofule onSensorTrigger.. %d\n",data);
}
void simulateSendor(sensorCallback cb){

	cb(78);	
}

int main(){

	simulateSendor(onSensorTrigger);

	return 0;
}
