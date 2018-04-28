#include <stdio.h>
#include <math.h>

int decyToAny(int decy, int anySystem);
int anyToDecy(int anyNumber,int anySystem);

int fromTo (int number, int fromSys, int toSys);

int main (void){
    int liczba,zsystemu,nasystem,dziesietnie;
    printf("Podaj liczbe: ");
    scanf("%d",&liczba);
    printf(", jest w systemie: ");
    scanf("%d",&zsystemu);

    printf("\nZamieniam na: ");
    scanf("%d",&nasystem);
    dziesietnie=anyToDecy(liczba,zsystemu);
	
    printf("\nW systemie 10: %d", dziesietnie);
    printf("\nW systemie %d: %d",nasystem,decyToAny(dziesietnie,nasystem));

    printf("\n Bezpośrednio z %d do %d: %d\n",zsystemu,nasystem,fromTo(liczba,zsystemu,nasystem));
\\niedziala

	return 0;
}

int fromTo (int number, int fromSys, int toSys){
	int i=0;
	int result=0;

	while (number!=0){
		result += (number%toSys)*pow(fromSys,i);
		number=number/toSys;
		i++;
	}
	return result;
}
int decyToAny(int decy, int anySystem){
    int x=0;
    int anyNumber=0;
    
    while (decy!=0){
        anyNumber += (decy%anySystem)*pow(10,x);// dodaje od np cyfry tysiecy do jednostek
        decy=decy/anySystem;
        x++;
    }
    return anyNumber;
}

int anyToDecy(int anyNumber,int anySystem){
    int decy=0;
    int i=0;
    while(anyNumber!=0){
        decy+=(anyNumber%10)*pow(anySystem,i);// dodaje od dyfry jednostek do ...
        //       reszta z dzielenia * system do i
        anyNumber=anyNumber/10;
        // zaokragla do pelnej liczby.. koniec przy zerze
		i++;
	}
    return decy;

}
