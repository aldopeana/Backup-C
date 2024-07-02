#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int N,A;
	cin >> N;
	int cuantos_son_divisibles = 1;
	for(int i=1; i<=N; i++){
		cin >> A;
		
		for(int i=2; i<=sqrt(A); i++){
		if(A % i == 0){
			cuantos_son_divisibles++;
		}
	}
	if(cuantos_son_divisibles == 1){
		cout << "Primo" << endl;
	}else{
		cout << "No Primo" << endl;
	}
}
	
	return 0;

}
