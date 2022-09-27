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
#define CANT 1

int inicioMenu(){

	eProducto productos[CANT];

	int salir = FALSE;
	int opcionIngresada;

	do{
		inicializarVector(productos, CANT);
		printf("\n\t\tMenu principal\n\n"
				"1.Alta producto.\n"
				"2.Baja producto.\n"
				"3.Modificación producto.\n"
				"4.Listado productos.\n"
				"5.Listado ordenado por precio.\n"
				"6.Listado ordenado por descripción.\n"
				"7.Salir.\n");
		printf("Ingrese una opción: ");
		opcionIngresada = getNumeroInt(1,6);
		switch(opcionIngresada){
		case 1:
			altaProducto(productos, CANT);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			listarProductos(productos, CANT);
			break;
		case 5:
			ordenarProductosPorPrecio(productos, CANT);
			break;
		case 6:
			ordenarProductosPorDescripcion(productos, CANT);
			break;
		case 7:
			salir = TRUE;
			break;
		}

	}while(salir == FALSE);


	return 0;
}
