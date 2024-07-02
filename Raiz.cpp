#include <stdio.h>

int main(){
    int base = 2;
	int exponente,i;
	scanf("%d", &exponente);
	double resultado;
    i=1;
    resultado = 1;
    

    while(i<=exponente){
        resultado = resultado * base;
        i++;
    }
    printf("%0.f",resultado);
}
