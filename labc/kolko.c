#include <stdio.h>

char pole[3][3];

void show(void)
{
	/*POKAZ POLE*/
	int w;
	printf("\n---------------")

	for (w=0;w<=3;w++)
	{
		for(s=0;s<=3;s++)
			printf("| %c ",pole[w,s])
	printf("\n---------------")
}

void win(symbol)
{
	
}

int main()
{
	int i,j;
	
	char s1,s2;
	bool stan=1;
	
	/*ZAPELNIAM POLE SPACJAMI*/
	for (i=0;i<=3;i++)
	{
		for (j=0;j<=3;j++)
		pole[i][j] = {' ',' '};

	}
	
	/*WYBOR SYMBOLU*/
	
	printf("Graczu 1 wybierz swoj symbol!: %c\n",s1);
	printf("Graczu 2 wybierz swoj symbol!: %c\n",s2);
	
	

	while (stan=1)
	{
		printf("Pierwszy graczu wybierz wiersz: %c",&wyborwiersza);
		printf("  ,wybierz kolmune: %c\n",&wyborkolumny);
		pole[wyborwiersza,wyborkolumny] = s1;
		show();

		printf("Drugi graczu wybierz wiersz: %c",&wyborwiersza);
		printf("  ,wybierz kolmune: %c",&wyborkolumny);
		pole[wyborwiersza,wyborkolumny] = s2;
		show();

	}
	



	return 0;


}




