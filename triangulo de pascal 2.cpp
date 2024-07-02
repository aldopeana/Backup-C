#include <stdio.h>
#include <stdlib.h>

// Declaraci�n de las funciones a utilizar
unsigned factorial(unsigned);

// Creaci�n de la funci�n factorial que devuelve
// el resultado del factorial de un numero sin utilizar
// recursividad

unsigned factorial(unsigned numero) {
    int resultado = 0;
    int contador = 0;
    if (numero == 0) {
        resultado=1;
    } else {
        resultado=1;
        for(contador=numero; contador>0; contador--) {
            resultado*=contador;
        }
    }
    return resultado;
}

// Funcion principal
int main()
{
    // Variables a utilizar
    int filas = 0;
    int columnas = 0;
    int contador = 0;
    int posicion = 0;
    int f = 0;
    int c = 0;
    int calculo = 0;

    // Solicitar el numero de filas a visualizar
    printf("No.Filas: ");
    scanf(" %d",&filas);
    // Calculamos el numero de elementos del vector
    // para ello realizamos el sumatorio del numero
    // de filas
    for(contador=filas-1; contador>=0; contador--) {
        columnas+=contador;
    }
    // Creamos el vector donde guardar los valores
    int triangulo[columnas];
    // recorremos el vector realizando el calculo del valor
    // utilizando el numero combinatorio
    for(f=0; f<filas-1; f++) {
        for(c=0; c<=f; c++) {
            // se calcula el valor de la posicion del numero en
            // el vector utilizado el numero combinatorio
           calculo = factorial(f)/(factorial(c)*factorial(f-c));
            // se asigna el valor a la posicion del vector que
            // le corresponde
           triangulo[posicion]=calculo;
           posicion++;
        }
    }

    // Visualizar el triangulo de pascal
    // para que salga correctamente utilizamos
    // un formato de printf que permite indicar las
    // longitudes y espacios en blanco a a�adir,
    // utilizando el s�mbolo asterisco en el patr�n de
    // visualizaci�n.
    posicion=0;
    for(f=0;f<filas-1;f++) {
        printf("\n%*c",(int) (columnas/2)-f,' ');

        	if(triangulo[posicion]%2==0){
        		printf(". ");
            	}else{
            		printf("* ");
				}
    }

    return 0;
}
