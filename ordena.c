//Librería de operaciones estandar, entrada-salida,tipos
#include<stdio.h>

/*Función bubble_sort que recibe un apuntador a un arreglo (int)
y la longitud del arreglo (int)
-->Ordena un arreglo*/
void bubble_sort( int *arr, int longitud ){

	//variable de control para saber cuando el valor este ordenado
	int ordenado = 1;
	//evitar comparaciones extra
	int j = 0;

	//Mueve el valor mientras no este ordenado
	while( ordenado == 1 ){

		//lo declaramos falso para saber cuando este ordenado
		ordenado = 0;
		//vamos decreciendo hasta que posición se debe comparar
		j ++;

		//así recorremos los valores del arreglo
		for( int i = 0; i < (longitud-j) ; i++ )
			//en caso de que el primer valor sea mayor al segundo se intercambian
			if( *(arr+i) > *(arr+i+1) ){

				//asignamos el valor de (arr+i) a la variable v
				int v = *(arr+i);
				//asignamos el valor de (arr+i+1) al apuntador (arr+i)
				*(arr+i) = *(arr+i+1);
				//asignamos el valor de la variable v al apuntador (arr+i+1)
				*(arr+i+1) = v;

				//el valor ya esta ordenado
				ordenado = 1;


			}

	}

}

//Fumción principal del programa, devuelve un int y recive void (accion)
int main( void ){

	//creamos un arreglo con elementos desordenados
	int arreglo[] = {6,5,4,3,2,1};
	//largo del arreglo: tamaño del arreglo en bytes entre el tamaño de uno de sus elementos
	int leng = sizeof(arreglo)/sizeof(arreglo[0]);

	//recorremos el arreglo para imprimirlo
	for( int x = 0; x<leng; x++ )
		//imprimimos la lista en su estado inicial
		printf( "%d ", arreglo[x] );

	//llamamos a la función y le pasamos la dirección en memoria del arreglo
	bubble_sort( &arreglo[0], leng );

	//imprimimos un enter
	printf("\n");

	//recorremos el arreglo para imprimirlo
	for( int x = 0; x<leng; x++ )
		//imprimimos la lista en su estado final (despues de llamar la función)
		printf( "%d ", arreglo[x] );

	//regresamos 0
	return 0;

}