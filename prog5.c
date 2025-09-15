#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double factorielle(double);

int main() {
		
	double n,p;
	double tab[20];
	int i=20;
	i=1; //initialisation
	while (1.0/i > 0.1){
		printf("1/%d vaut %lf \n", i, 1.0/i);
		i=i+1; //avancement du compteur de boucle
		}

	
	n=20;
	for(i=0; i<n; i=i+1){
		tab[i]=1.0/i;
		}
		printf("le tableau est tab[]=%lf \n", tab[3]);
		
/*	n=20;
	p=1;
	for(i=1; i<n; i=i+1){
		p=p*i;
		}
		printf("le factoriel est p!=%lf \n", p);	*/	
	
	printf("le factoriel f!=%lf \n", factorielle(10));
}
	
	
double factorielle(double n) {
	double f;
	int i;
	i=1;
	f=1;
	for(i=1; i<n; i=i+1){
		f=f*i;
		//printf("le factoriel est f!=%lf \n", f);
	}
	return f;	
}
	
	
	
	
	
	
