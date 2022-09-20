#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input-labo9-dojito.h"
#include "abm-clase-9.h"

#define TRUE 1
#define FALSE 0
#define EEUU 1
#define CHINA 2
#define OTRO 3
#define IPHONE 1
#define MAC 2
#define IPAD 3
#define ACCESORIOS 4
#define CANT 10

int inicioMenu(){

	eProducto productos[CANT];

	int salir = FALSE;
	int opcionIngresada;

	do{
		inicializarVector(productos, CANT);
		printf("\n\t\tMenu principal\n\n1.Alta producto.\n2.Baja producto.\n3.Modificación producto.\n4.Listado productos.\n5.Listado ordenado por precio.\n6.Listado ordenado por descripción.\n");
		printf("Ingrese una opción: ");
		opcionIngresada = getNumeroInt(1,6);
		switch(opcionIngresada){
		case 1:
			altaProducto(productos, CANT);

			break;
		}




	}while(salir == FALSE);


	return 0;
}
