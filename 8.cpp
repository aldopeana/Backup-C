#include <iostream>
#include <math.h>
using namespace std;

int divisores()
{
	long int a, c=0,b;
	int divisores[20000];
	int numero_divisores = 0;
	cin >> a;
	if(a ==0){
		return 0;
	}

	for(int i=1; i<=sqrt(a); i++){
		if(a%i==0){
			divisores[numero_divisores++] = i;
		}
	}
	
	int sqrta = sqrt(a);
	int cantidad = numero_divisores*2;
	


	int cuenta = numero_divisores;
	for(int i = numero_divisores-1; i >= 0;i--){
		if(pow(divisores[i], 2)==a){
			continue;
		}
		cuenta++;
	}
	cout<<cuenta<<endl;

	for(int i = 0; i < numero_divisores;i++){
		cout<< divisores[i]	<< " ";
		
	}
	for(int i = numero_divisores-1; i >= 0;i--){
		if(pow(divisores[i], 2)==a){
			continue;
		}
		cout<< a/divisores[i];
		if(i!=0){
			
			cout << " ";
		}
		
	}

	cout<<endl;
	return 1;
}
int main(){
	
	while(divisores()){
		
	}
}
