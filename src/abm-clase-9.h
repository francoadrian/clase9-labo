#ifndef ABM_CLASE_9_H_
#define ABM_CLASE_9_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int idProducto;
	int estado;
	char descripcion[100];
	int nacionalidad;
	int tipo;
	float precio;
}eProducto;

void mostrarUnProducto(eProducto lista);
void listarProductos(eProducto lista[], int size);
void ordenarProductosPorPrecio(eProducto lista[], int size);
void ordenarProductosPorDescripcion(eProducto lista[], int size);
/*int searchFree(eProducto list[], int len);*/
int altaProducto(eProducto array[], int cantidad);
int inicializarVector(eProducto array[], int cantidad);


#endif /* ABM_CLASE_9_H_ */
