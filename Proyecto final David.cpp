#include <iostream>
#include <string>
using namespace std;
/*
int main()
{
	int n,m;
	int suma;
	int cifras[5];
	int i = 0;
	cin >> n;
	cin >> m;
	suma = n+m;
	
	
	while(suma>0){
		cifras[i] = suma%10;
		suma = suma/10;
		i++;
	}
	
	for(int a = i-1; a>=0; a--)
	{
		cout << cifras[a] << "\t";
	}
}
*/

int main()
{
	int n1, n2,resultado;
	int opc;
	int cifra1=0,cifra2=0;
	cout << "ingresa el primer numero" << endl;
	cin >> n1;
	cout << "ingresa el segundo numero" << endl;
	cin >> n2;
	cout << "Que opcion eliges:\n 1) Suma \t 2) Resta \t 3) Multiplicacion \t 4) Division" << endl;
	cin >> opc;
	
	switch(opc)
	{
		case 1:
			cout << "elegiste suma" << endl;
			resultado = n1 + n2;
		break;
		case 2:
			cout << "Elegiste resta" << endl;
			resultado = n1 - n2;
		break;
		case 3:
			cout << "elegiste multi" << endl;
			resultado = n1 * n2;
		break;
		case 4:
			cout << "elegiste division" << endl;
			resultado = n1/n2;
		break;
	}
	
	if(resultado>0 && resultado <=99)
	{
		cifra1 = resultado/10;
		cifra2 = resultado%10;
	}
	
	cout << "La primera cifra es: " << cifra1 << endl;
	cout << "La segunda cifra es: " << cifra2 << endl;
}
