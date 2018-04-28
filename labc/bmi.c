#include <stdio.h>


int main () {
	int waga;
	double wzrost;


	printf("Podaj waga w kg:");
	scanf("%d",&waga);
	printf("Podaj wzrost w cm:");
	scanf("%lf",&wzrost);

	wzrost = wzrost*0.01;
	wzrost = wzrost*wzrost;


	double bmi = waga/wzrost;
	printf("BMI wynosi: %f",bmi);

	return 0;
}
