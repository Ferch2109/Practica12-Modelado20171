#include <stdio.h>

//se declaran antes para poder utilizarlas en la función principal
/* Declaración de funciones */
//devuelve un int, recibe un apuntador a una función que devuelve y recive un int, y un int
int misterio1(int (*fun) (int), int);
//devuelve void, recibe un apuntador a una función que devuelve void y recibe un int, y un int
void misterio2(void (*fun) (int), int);
//función que recibe y devuelve un int
int cuadrado_num(int);
//función que recibe un int y devuelve void(accion)
void imprime_num(int);

//programa principal:devuelve int
int main()
{
  //declara un apuntador a una función que recibe y devuelve int
  int (*fun1) (int);
  //declara un apuntador a una función que recibe int y devuelve void
  void (*fun2) (int);

  //le asigna a fun1 la dirección en memoria de la función cuadrado_num
  fun1 = &cuadrado_num;
  //le asigna a fun2 la dirección en memoria de la función imprime_num
  fun2 = &imprime_num;

  /*asigna el valor que regresa la función misterio 1 a var
  en este caso obtendremos 9 que es 3 al cuadrado*/
  int var = misterio1(fun1, 3);
  /*llama a la función misterio2
  que hará que se imprima el valor de var que es 9*/
  misterio2(fun2, var);
}

//recibe un apuntador a función que recibe y devuelve int, un int y devuelve int
int misterio1(int (*fun) (int), int num)
{
    //regresa lo que devuelve la función a la que apunta fun, y le pasa num como parámetro
    return fun(num);
}
//recibe un apuntador a una función que devuelve void y recibe un int, y un int
void misterio2(void (*fun) (int), int num)
{
    //llama a la función a la que apunta fun y le pasa como parámetro num
    fun(num);
}
//función que recibe y devuelve un int
int cuadrado_num(int num)
{
    //regresa el valor de num al cuadrado
    return num * num;
}

//función que recibe un int y devuelve void(accion)
void imprime_num(int num)
{
    //imprime el valor de la variable num
    printf("Tada: %d\n", num);
}
