#include<stdio.h>
void f1(int a[]){
	int *p=0;
	int i=0;
	while(i++ > 1)
		p=&a[i]; //error
	*p=0;
}
void main()
{
	int a[10];
	f1(a);
}
