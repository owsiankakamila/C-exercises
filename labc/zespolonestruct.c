#include <stdio.h>

struct zespolona {
	double Re;
	double Im;
	double modul;
	double arg;
	
};


	
void liczeModul ( double * modul, double x, double y);
void liczeArg (double * arg, double x, double y);
void pokazWykladnicza(struct zespolona x);

int main() {
	struct zespolona pierwsza;
	printf("Czesc rzeczywista: ");
	scanf("%lf", pierwsza.Re);
	printf("Czesc urojona: ");
	scanf("%lf", pierwsza.Im);

	liczeModul(&pierwsza.modul,pierwsza.Re,pierwsza.Im);
	liczeArg(&pierwsza.arg,pierwsza.Re,pierwsza.Im);

	printf("Algebraiczna: %lf + i%lf",pierwsza.Re,pierwsza.Im);
	pokazWykladnicza(pierwsza)

	return 0;

}

void liczeModul ( double * modul, double x, double y){
	*modul = hypot(x,y);
}
void liczeArg (double * arg, double x, double y){
	*arg = atan2(y,x);
}

void pokazWykladnicza(struct zespolona x){
	printf("Wykladnicza: %lf %lf",x.modul,x.arg);
}
