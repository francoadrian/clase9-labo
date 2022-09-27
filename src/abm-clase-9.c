#include "abm-clase-9.h"


#define LIBRE 1
#define OCUPADO 0

void removePassenger(eProducto list[], int len, float* contadorPasaje, float* acumuladorPasaje){

	int idModificar;
	int i;

	printf("Ingrese el id del pasajero que desea a eliminar\n");
	scanf("%d",&idModificar);

	for(i = 0; i < len; i++){
		if(idModificar == list[i].id){
			printf("El pasajero esta registrado y se procedera a eliminarlo de la lista\n");
			list[i].estado = 1;
			*acumuladorPasaje = *acumuladorPasaje - list[i].price;
			*contadorPasaje = *contadorPasaje - 1;
			break;
		}
	}
	if(list[i].isEmpty == 1){
		printf("El pasajero ha sido dado de baja exitosamente\n");
	}
}


int buscarPorId(Passenger list[], int len, float* contadorPasaje, float* acumuladorPasaje){

	int menuModificar;
	int idModificar;
	int retorno = 0;
	int auxId;

	float acumuladorPrecioPasaje = 0;


	printf("Ingrese el id del pasajero a modificar");
	scanf("%d", &idModificar);

	for(int i = 0; i < len; i++){
			if(idModificar == list[i].id && list[i].isEmpty == 0){
				retorno = 1;
				auxId = i;
				break;
			}
		}

	if(list[auxId].isEmpty == 0){
		if(retorno == 1){
			do{
				printf("Introduzca el campo que desea modificar\n1.Nombre\n2.Apellido\n3.Precio\n4.Tipo de Pasajero\n5.Estado del Vuelo\n6.Codigo de Vuelo\n7.Salir de modificar pasajero");
				scanf("%d", &menuModificar);

					switch(menuModificar){
					case 1:
						printf("El nombre actual es %s\n",list[auxId].name);
						printf("Ingrese el nombre nuevo");
						scanf("%s", list[auxId].name);
						printf("El nombre modificado es %s\n\n",list[auxId].name);
						break;
					case 2:
						printf("El apellido actual es %s\n",list[auxId].lastname);
						printf("Ingrese el apellido nuevo");
						scanf("%s", list[auxId].lastname);
						printf("El apellido modificado es %s\n\n",list[auxId].lastname);
						break;
					case 3:
						printf("El precio actual es %f\n",list[auxId].price);
						acumuladorPrecioPasaje = acumuladorPrecioPasaje - list[auxId].price;
						printf("Ingrese el precio nuevo");
						scanf("%f", &list[auxId].price);
						printf("El precio modificado es %f\n\n",list[auxId].price);
						acumuladorPrecioPasaje = acumuladorPrecioPasaje + list[auxId].price;
						break;
					case 4:
						printf("El tipo de pasajero actual es %d\n",list[auxId].typePassenger);
						printf("Ingrese el tipo de pasajero nuevo");
						scanf("%d", &list[auxId].typePassenger);
						printf("El tipo de pasajero modificado es %d\n\n",list[auxId].typePassenger);
						break;
					case 5:
						printf("El estado del vuelo actual es %d\n",list[auxId].statusFlight);
						printf("Ingrese el estado del vuelo nuevo");
						scanf("%d", &list[auxId].statusFlight);
						printf("El estado del vuelo modificado es %d\n\n",list[auxId].statusFlight);
						break;
					case 6:
						printf("El codigo de vuelo actual es %s\n",list[auxId].flycode);
						printf("Ingrese el codigo de vuelo nuevo");
						scanf("%s", list[auxId].flycode);
						printf("El codigo de vuelo modificado es %s\n\n",list[auxId].flycode);
						break;
						}
			}while(menuModificar == 7);
		}else{
			printf("Error, el pasajero que intenta modificar no se encuentra en nuestra base de datos");
		}

		*acumuladorPasaje = acumuladorPrecioPasaje;

	}
	return retorno;
}

void mostrarUnProducto(eProducto lista)
{
	printf("%10d %-10s %10d %10d %5.2f %10d", lista.idProducto, lista.descripcion, lista.nacionalidad, lista.tipo, lista.precio, lista.estado);
}

void listarProductos(eProducto lista[], int size)
{
	for(int i= size; i<0; i++)
	{
		if(lista[i].estado == OCUPADO)
		{
			mostrarUnProducto(lista[i]);
		}
	}
}

void ordenarProductosPorPrecio(eProducto lista[], int size)
{
	int i, j;
	eProducto listaAux;

	for(i=0; i<size-1; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(lista[i].precio > lista[j].precio)
			{
				listaAux = lista[i];
				lista[i] = lista[j];
				lista[j] = listaAux;
			}
		}
	}
}

void ordenarProductosPorDescripcion(eProducto lista[], int size)
{
	int i, j;
	eProducto listaAux;

	for(i=0; i<size-1; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(strcmp(lista[i].descripcion,lista[j].descripcion) > 0)
			{
				listaAux = lista[i];
				lista[i] = lista[j];
				lista[j] = listaAux;
			}
		}
	}
}

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
