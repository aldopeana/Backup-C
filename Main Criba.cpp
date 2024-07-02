#include <iostream>

using namespace std;

int criba[1002];
int primos[1002];
int cuantos_primos = 0;

int main()
{
	int N;
	cin >> N;
	int marcador = 0;
	for(int actual = 2; actual<=N; actual++){
		if(criba[actual] == 0){
			cuantos_primos++; 
			primos[cuantos_primos] = actual;
			for(int sonda = actual; sonda <= N; sonda=sonda+actual){
				criba[sonda] = 1;
			}
		}
	}
	for(int i=1; i<=cuantos_primos; i++){
		cout << primos[i] << " ";
	}
}

