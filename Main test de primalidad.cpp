#include  <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int cuantos_son_divisibles = 1;
	for(int i=2; i<=N; i++){
		if(N % i == 0){
			cuantos_son_divisibles++;
		}
	}
	if(cuantos_son_divisibles == 2){
		cout << "Es primo";
	}else{
		cout << "No primo";
	}
	
	return 0;
}
