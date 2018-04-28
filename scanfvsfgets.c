#include<stdio.h>


int main (){
	
	char tab1 [30];
	char tab2 [30];

	printf("1\n");
	fscanf(stdin,"%29s",tab1);
	
	printf("2\n");
	fgets(tab2,30,stdin);
	

	printf("%s\n",tab1);
	printf("%s\n",tab2);


	return 0;
}
