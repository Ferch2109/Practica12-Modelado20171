//Librería de operaciones estandar, entrada-salida,tipos
#include<stdio.h>

//Función swap que recibe dos apuntadores a int y regresa void
void swap( int *p1, int *p2){

	//asignamos el valor de p1 a la variable v
	int v = *p1;
	//asignamos el valor de p2 al apuntador p1
	*p1 = *p2;
	//asignamos el valor de la variable v al apuntador p2
	*p2 = v;

}

//Función principal del programa, devuelve un int y recive void (accion)
int main( void ){

	//creamos los apuntadores a y b
	int a = 3;
	int b = 2;

	//imprimimos los valores iniciales
	printf("a = %d, b = %d \n", a, b );
	//llamamos a la función swap con a y b como parámetros
	swap( &a, &b );
	//imprimimos sus valores después de llamar a la función
	printf("a = %d, b = %d \n", a, b );
	//regresamos 0
	return 0;

}