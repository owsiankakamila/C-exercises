#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * funkcja(){
	char helptab [80];
	int x,i;
	printf("Podaj lancuch");

	scanf("%s",helptab);
	printf("%d\n", strlen(helptab));
	x=strlen(helptab) +1;
	 

	char * wskaznik = (char*)malloc( x *sizeof (char));
	//if (wskaznik =NULL);
	for(i=0;i<x;i++){
		wskaznik[i] = helptab[i];
	}
	return wskaznik;
}

int main () {
	char *wsk;
		
	int ilosc,i;
	wsk =funkcja();
	
	printf("%s",wsk);
	printf("Podaj liczbe lancuchow:");
	scanf("%d",&ilosc);
	char**tabWsk;
	tabWsk= (char**)malloc(ilosc*sizeof(char*));

	for (i=0;i<ilosc;i++){
		tabWsk[i]=funkcja();
	}
	
	
	

	return 0;
}
