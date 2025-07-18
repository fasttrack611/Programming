#include<stdio.h>


char *name[]={"Aleem", "shariff", "Bangalore"};

char *flowers[]={"ROse", "Jasmin", "Liklly", "Lotus"};

int main(){
	char **ptr=name;

	printf("\n Details :: %s\n ",*ptr);
	printf("\n Details :: %s\n ",*(ptr+1));
	printf("\n Details :: %s\n ",*(ptr+2));
	printf("\n Details :: %s\n ",ptr[2]);

	ptr=flowers;
	for(int i=0; i<3;i++){
	printf("\n Flowers :: %s\n ",*(ptr+i));
	printf("\n Flowers :: %s\n ",ptr[i]);
	}
}

