//Librería de operaciones estandar, entrada-salida,tipos
#include<stdio.h>

//Fumción principal del programa, devuelve un int y recive void (accion)
int main( void ){

	//mediante la función printf imprimimos en consola el tamaño del tipo short
	printf( "El tipo short tiene tamaño %zu \n", sizeof(short) );
	//mediante la función printf imprimimos en consola el tamaño del tipo int
	printf( "El tipo int tiene tamaño %zu \n", sizeof(int) );
	//mediante la función printf imprimimos en consola el tamaño del tipo unsigned int
	printf( "El tipo unsigned int tiene tamaño %zu \n", sizeof(unsigned int) );
	//mediante la función printf imprimimos en consola el tamaño del tipo apuntador a int
	printf( "El tipo apuntador a int tiene tamaño %zu \n", sizeof(int*) );
	//mediante la función printf imprimimos en consola el tamaño del tipo char
	printf( "El tipo char tiene tamaño %zu \n", sizeof(char) );
	//mediante la función printf imprimimos en consola el tamaño del tipo float
	printf( "El tipo float tiene tamaño %zu \n", sizeof(float) );
	//mediante la función printf imprimimos en consola el tamaño del tipo double
	printf( "El tipo double tiene tamaño %zu \n", sizeof(double) );
	//regresamos 0
	return 0;

}