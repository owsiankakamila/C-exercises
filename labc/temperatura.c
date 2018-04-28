#include<stdio.h>
int main(){
	double fahr,celsius;
	printf("Podaj temperature w stopniach Fahrenheita:");
	scanf("%lf",&fahr);

	celsius = (fahr-32.0)*(5.0/9.0);
	printf("Jest to: %0.2f stopni Celsjusza",celsius);



	return 0;
}
