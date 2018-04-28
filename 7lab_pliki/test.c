#include<stdio.h>

int main (void){
	int tab[10];
	int i=0;
	while (i<10){
		tab[i]=2;
		i++;
	}
	for (i=0;i<10;i++){
		printf("%d",tab[i]);
	}

	return 0;
}
