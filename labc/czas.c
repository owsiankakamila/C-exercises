#include<stdio.h>
int main() {
	int sekundy;
	int godziny;
	int minuty;
	int wybor;

	printf("Co liczysz?\n 1.godziny na sekundy\n2.sekundy na godziny");
	scanf("%d",&wybor);
	if (wybor==1) {
		printf("Podaj ilosc godzin: \n");
		scanf("%d",&godziny);
		minuty = godziny*60;
		sekundy = minuty*60;
		printf("To %d minut, a wiec %d sekund",minuty,sekundy);

		}
	else if (wybor==2){
		printf("Podaj ilosc sekund: \n");
		scanf("%d",&sekundy);
		minuty = sekundy/60;
		godziny = minuty/60;
		printf("To %d minut, a wiec %d godzin",minuty,godziny);

		}
	
	
	return 0;
}
