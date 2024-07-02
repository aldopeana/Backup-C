#include <stdio.h>

int Vagabundin(int numeros, int n, int modulo, int m){
	int maximo = 0;
	int valor;

	for(int i = 0;i < n;i++){
		for(int j = i;j < n;j++){
			valor = (numeros[i] + numeros[j])%modulo;
			if(valor > maximo){
				maximo = valor;
			}
		}
	}
	return maximo;
}

void main(){
	int n  = 4;
	int lista[] = {1, 2, 3, 4};
	int m = 5;
	Vagabundin(lista,n,m);
}
