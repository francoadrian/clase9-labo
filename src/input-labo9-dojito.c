#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float getNumeroFloat(float minimo, float maximo){

	float numeroIngresado;

	scanf("%f", &numeroIngresado);
	while(numeroIngresado < minimo && numeroIngresado > maximo){
		printf("\nDato inválido. Reingrese: ");
		scanf("%f", &numeroIngresado);
	}

	return numeroIngresado;
}

int getNumeroInt(int minimo, int maximo){

	int numeroIngresado;

	scanf("%d", &numeroIngresado);
	while(numeroIngresado < minimo && numeroIngresado > maximo){
		printf("\nDato inválido. Reingrese: ");
		scanf("%d", &numeroIngresado);
	}
	return numeroIngresado;
}
