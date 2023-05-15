#include<stdio.h>
#include<stdlib.h>



void Calculo (int a, int b){
	float s = a + b;
	printf ("Soma: %.0f", s);
	printf ("\nMedia: %.1f\n", s/2);
}

main(){
	
	int n1, n2;
	
	printf("Numero 1: "); scanf ("%d", &n1);
	printf("Numero 2: "); scanf ("%d", &n2);
	Calculo (n1, n2);
	Calculo (100, 50);
}
