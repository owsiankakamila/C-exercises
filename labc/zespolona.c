#include<stdio.h>
#include<math.h>

void licze (double *m,double *ar,double a, double b){
	*m = hypot(a,b);
	*ar = atan2(b,a);
}

int main (void){
	double Re, Im, mod, arg;
	scanf("%lf",&Re);
	scanf("%lf",&Im);
	licze(&mod,&arg,Re,Im);
	
	printf("%f\n",mod);
	printf("%f\n",arg);
	return 0;
}


