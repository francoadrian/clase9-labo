#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 1
#define OCUPADO 0

typedef struct{
	int idProducto;
	int estado;
	char descripcion[100];
	int nacionalidad;
	int tipo;
	float precio;
}eProducto;

int inicializarVector(eProducto array[], int cantidad){

	for(int i = 0; i < cantidad; i++){
		array[i].estado = LIBRE;
	}
	return 0;
}

int altaProducto(eProducto array[], int cantidad){

	for(int i = 0; i < cantidad; i++){
		if(array[i].estado == LIBRE){
			printf("\nIngresar idProducto: ");
			scanf("%d", &array[i].idProducto);
		}
	}

	return 0;
}
