
#include "abm-clase-9.h"

#define LIBRE 1
#define OCUPADO 0
/*
int searchFree(eProducto list[], int len){

	int i;
	int retorno = -1;

	for(i = 0; i < len; i++){
		if(list[i].estado == 1){
			retorno = i;
			break;
		}
	}
	return retorno;
}
*/
int inicializarVector(eProducto array[], int cantidad){

	for(int i = 0; i < cantidad; i++){
		array[i].estado = LIBRE;
	}
	return 0;
}

int altaProducto(eProducto array[], int cantidad){

	int i;
	int flag = 0;

	for(i = 0; i < cantidad; i++){

		if(array[i].estado == LIBRE){
			printf("\nIngresar idProducto: ");
			scanf("%d", &array[i].idProducto);
			printf("\nIngresar descripción: ");
			fflush(stdin);
			scanf("%[^\n]", array[i].descripcion);
			printf("\n1.Estados unidos\n2.China\n3.Otro\n\nIngresar nacionalidad: ");
			scanf("%d", &array[i].nacionalidad);
			printf("\n1.iPhone\n2.Mac\n3.iPad\n4.Accesorios\n\nIngresar tipo: ");
			scanf("%d", &array[i].tipo);
			printf("\nIngresar precio: ");
			scanf("%f", &array[i].precio);
			array[i].estado = OCUPADO;
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		printf("No hay espacio libre");
	}

	return 0;
}
