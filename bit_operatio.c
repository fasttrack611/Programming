#define SET_Bit(val, pos) (val|=((1<<pos))) 
#define CLR_Bit(val, pos) (val &=(~(1<<pos))) 

int main (){

	int x=8;
	SET_Bit(x,3);
	
	return 0; 
}


