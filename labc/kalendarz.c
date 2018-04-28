#include <stdio.h>

int main (void)
{
	int miesiac, dzien, dtg;
	int i;
	
	
	printf("Podaj nr miesiaca: ");
	scanf("%d",&miesiac);

	printf("Podaj nr dnia od którego miesiac sie zaczyna: ");
	scanf("%d",&dzien);


	printf("Miesiac %d\n",miesiac);
	printf("|Ni |Po |Wt |Sr |Cz |Pt |So |\n");
	
	
	for (i=0 ;i<dzien ;i++ )
		{	
			printf("|   ");
		}
	
	for (i=dzien;i<=30+dzien-1;i++)
		{
			if (i%7==0)
			printf("|\n");
			printf("|%2d ",i-dzien+1);
			
		
		}
	while(i%7!=0){
		printf("|   ");
		i++;
	}
	printf("|");
 
	
	

	return 0;
}
