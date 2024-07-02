#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i;
	float numeros[9];
	float calificaciones=0;
	float suma, resta, multiplicacion, division;
	
	for(i=0;i<10;i++)
	{
		cout << "ingrese un numero" << endl;
		cin >> numeros[i];
		suma = suma + numeros[i];
		resta = resta - numeros[i];
		multiplicacion = multiplicacion * numeros[i];
		division = division/numeros[i];
	}
	
	cout << "La suma de todo es: " << suma << endl;
	cout << "La resta de todo es: " << resta << endl;
	cout << "La multiplicacion de todo es: " << multiplicacion << endl;
	cout << "La division de todo es: " << division << endl;
}
