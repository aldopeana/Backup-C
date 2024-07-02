#include <stdio.h>

int main(){
	
	int i, n[5], suma=0, min=50;
	
	for(i=0; i<5; i++){
		printf("Inserte un numero %d\t", i+1);
		scanf("%d", &n[i]);
		if(n[i]<25 || n[i]>50){
			i=i-1;
			printf("El numero a ingresar debe ser entre 25 y 50\n");
		}
	}
	
	
	for(i=0; i<5; i++){
		if(n[i] %2 == 0){
			printf("%d Es numero par\n", n[i]);
		}
	}
	
	
	for(i=0; i<5; i++){
		suma = suma + n[i];
	}
	
	printf("La suma de todos los numeros ingresados es:  %d\n", suma);
	
	
	for(i=0; i<5; i++){
		if(n[i] < min){
			min = n[i];
		}
	}
	
	printf("El numero menor de todos los numero ingresados es:  %d", min);
}
