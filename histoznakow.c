#include <stdio.h>
#define ILOSCZNAKOW 5
/*histogram pionowy wybranych znakow*/

int main (void)
{
	int c,i,j,najdluzszy;
	int amount [ILOSCZNAKOW];


	for (i=0;i<ILOSCZNAKOW;i++)
		amount[i]=0;


	while((c=getchar()) != EOF)
	{
		if (c=='!')
			amount[0]++;
		if (c=='1')
			amount[1]++;
		if (c=='a')
			amount[2]++;
		if (c=='3')
			amount[3]++;
		if (c==' ')
			amount[4]++;


	
	}
	printf("\n");
	najdluzszy=amount[0];

	for (i=0;i<ILOSCZNAKOW;i++)
	{	if(amount[i]>najdluzszy)
			najdluzszy=amount[i];
	}

	for (j=najdluzszy;j>0;j--)
	{	
		for (i=0;i<ILOSCZNAKOW;i++)
		{
			if(amount[i]==j)
				{
				printf("*  ");
				amount[i]--;
				}
			else
				printf("   ");
		}
		printf("\n");
	}
			
	printf("!  1  a  3 ' '\n");

	return 0;
}
