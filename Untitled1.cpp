#include <stdio.h>

int main(){
	
	int n = 1;
	int i = 1;
	int miArreglo[100];
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		scanf("%d", &miArreglo[i]);
	}
	for (i=n; i>=1; i--){
		printf("%d\t", miArreglo[i]);
	}
	return 0;
}
