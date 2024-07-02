#include <iostream>
using namespace std;

int main()
{
	int numero[10];
	int suma;
	int resta;
	int multi;
	
	numero[0] = 100;
	numero[1] = 300;
	numero[2] = 20;
	numero[3] = 80;
	numero[4] = 30;
	numero[5] = 10;
	numero[6] = 20;
	numero[7] = 40;
	numero[8] = 70;
	numero[9] = 5;
	
	suma = numero[0] + numero[1] + numero[2] + numero[3] + numero[4] + numero[5] + numero[6] + numero[7] + numero[8] + numero[9];
	resta = numero[0] - numero[1] - numero[2] - numero[3] - numero[4] - numero[5] - numero[6] - numero[7] - numero[8] - numero[9];
	multi = numero[0] * numero[1] * numero[2] * numero[3] * numero[4] * numero[5] * numero[6] * numero[7] * numero[8] * numero[9];
	
	cout << suma << endl;
	cout << resta << endl;
	cout << multi << endl;
}
