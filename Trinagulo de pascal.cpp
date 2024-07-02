#include <stdio.h>
#include <stdlib.h>

unsigned factorial(unsigned);



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

int main()
{
    int filas = 0;
    int columnas = 0;
    int contador = 0;
    int posicion = 0;
    int f = 0;
    int c = 0;
    int calculo = 0;

    scanf(" %d",&filas);
    for(contador=filas; contador>=0; contador--) {
        columnas+=contador;
    }
    int triangulo[columnas];
    for(f=0; f<filas; f++) {
        for(c=0; c<=f; c++) {
           calculo = factorial(f)/(factorial(c)*factorial(f-c));
           triangulo[posicion]=calculo;
           posicion++;
        }
    }


    posicion=0;
    for(f=0;f<filas;f++) {
        printf("\n%*c",(int) (columnas/2)-f,' ');
       for(c=0;c<=f;c++) {
            printf("%d ",triangulo[posicion]);
            posicion++;
        }
    }
}


