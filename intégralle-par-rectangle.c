#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main () {
	int a, b, i,n;
	double I, A, h, x;
	//f=exp(x);
	
	printf("Entrer la valeur de h:\n");
	scanf("%lf", &h);
	printf("h=%lf",h);
	
	a=0;
	b=1;
	i=0;
	A=0;
	x=0;
	
	n=(int)(b-a)/h;
	while (i<n-1) {
		A=((x+h)-x)*exp(x);
		printf("x=%lf, A=%lf \n", x, A);
		I=I+A;
		x=x+h;
		i=i+1;
		
	}
	printf("la somme des aires A est I=%lf \n", I);
		
}	
	











