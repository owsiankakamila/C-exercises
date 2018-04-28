#include<stdio.h>

void dodawanie (int pierwszy[],int drugi[],int nowa[],int size);

int main (void){
	int rozmiar,i;	
	printf("Podaj mi cokolwiek\n");
	scanf("%d",&rozmiar);
	int wynik[rozmiar];
	int wektor1[rozmiar];
	int wektor2[rozmiar];
	
	printf("Wprowadz elementy wektora 1:");
	
	for (i=0;i<rozmiar;i++){
		scanf("%d",&wektor1[i]);
	}

	printf("Wprowadz elementy wektora 2:");
	for (i=0;i<rozmiar;i++){
	scanf("%d",&wektor2[i]);
	}
	
	dodawanie(wektor1,wektor2,wynik,rozmiar);
	
	for (i=0;i<rozmiar;i++){
	printf("%d",wynik[i]);
	}

	return 0;
}

void dodawanie (int pierwszy[],int drugi[],int nowa[],int size){
	int i;
	
	for (i=0;i<size;i++){
		nowa[i]=pierwszy[i]+drugi[i];
	}
	

}


