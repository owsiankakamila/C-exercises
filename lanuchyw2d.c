#include<stdio.h>

int main(){
	char tab [5][20];
	int i;

	for(i=0;i<5;i++){
	fgets((char*)(tab+i), 20,stdin);
	}
	for(i=0;i<5;i++){
	printf("%s", tab[i]);
	}
	return 0;
}
