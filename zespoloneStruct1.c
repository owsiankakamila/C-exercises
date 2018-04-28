#include <stdio.h>

//wskaźnik poruszający się między strukturami w unii??

union zespolona {
	struct algebraiczna {
		double Re;
		double Im;
	};
	struct wykladnicza {
		double modul;
		double arg;
	};

};

int main(){
 	union zespolna liczba;
	printf("Jak chcesz podać liczbe?\n1. algebraicznie\n2. wykladniczo")
	scanf("%lf",stan);
	switch(stan)
	printf("Część rzeczywista: ");
	scanf("%lf", &liczba.algebraiczna.Re);
	

	return 0;
}


void liczeModul(double *modul,double x, double y){
	*modul = hypot(x,y);
}

void liczeArg(double *arg,double x, double y){
	*arg = atan2(y,x);
}
