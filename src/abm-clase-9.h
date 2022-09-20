#ifndef ABM_CLASE_9_H_
#define ABM_CLASE_9_H_

typedef struct{
	int idProducto;
	int estado;
	char descripcion[100];
	int nacionalidad;
	int tipo;
	float precio;
}eProducto;

int altaProducto(eProducto array[], int cantidad);
int inicializarVector(eProducto array[], int cantidad);

#endif /* ABM_CLASE_9_H_ */
