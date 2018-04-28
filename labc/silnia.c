#include<stdio.h>

void silniaIt(int* sil,int n){
	int i;
	*sil=n;
	for(i=n-1;i>0;i--){
		*sil=*sil*i;
	}
}
int silniaRek(int n){
	if(n==1) 
		return 1;
	return n*silniaRek(n-1);
}


int main (void){
	int silnia;
	int liczba;
	scanf("%d",&liczba);
	silniaIt(&silnia,liczba);
	printf("Iteracyjnie %d, Rekrencyjnie %d",silnia,silniaRek(liczba));
	return 0;
}
