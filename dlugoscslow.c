#include<stdio.h>

#define IN  1
#define OUT 0

int main ()
{
	/* histogram dlugosci wyrazow */

	int c,i;
	int state = IN;
	int lenght= 0;
	int maxi = 0;
	int ltab =10;
	int histo [ltab];
	
	
	for (i=0;i<ltab;i++)
		histo[i]=0;
		
	

	while ((c=getchar()) != EOF)
	{
		if (c==' ' || c=='\t' || c == '\n')
		{
			/*if (lenght>ltab)
				tu bedzie kiedys tablica dynamiczna
			*/
			if (lenght>maxi)
				maxi=lenght;
			for (i=1;i<=maxi;i++)
			{
				if (lenght == i)
				++histo[i];
			}
			state = OUT;
			lenght = 0;

		}
		else
		{
			state = IN;
			lenght++;
		
		}

	}	
	for (i=1;i<(ltab+1);i++)
		{printf("\n%d-znakowe:",i);
		for (int j=0;j<histo[i];j++)
			printf("*");}
		
	
	return 0;
}
