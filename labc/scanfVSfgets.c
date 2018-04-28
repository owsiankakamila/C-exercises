#include<stdio.h>


int main (){
	
	char tab1 [30];
	char tab2 [30];
	char tab3 [10];
	printf("1\n");
	fscanf(stdin,"%29s",tab1);

	
	printf("2\n");
	fgets(tab2,30,stdin);
	printf("3\n");

	
	fgets(tab3,10,stdin);	
	printf("\n WYPISUJE:\n");


	printf("%s\n",tab1);
	printf("%s\n",tab2);
	printf("%s\n",tab3);




	return 0;
}
