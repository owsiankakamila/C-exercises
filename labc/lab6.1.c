#include<stdio.h>

int main (void){
	int a=5;
	int b=10;
	int x;
	int *p=&a;
	int *q=&b;
	
	x=*p+*q;
	printf("%d",x);
	
	
	
	

	return 0;
}

