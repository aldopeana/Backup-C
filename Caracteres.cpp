//*Programa para saber si una letra es minuscula o mayuscuia*//

#include <iostream>
#include <string>

using namespace std;

	/*
		" -> strings
		' -> characters
	*/

int main()
{
	int N;
	char x;
	cin >> N;
	for(int i=1; i<=N; i++){
		cin >> x;
		if(x>='a' && x<='z'){
		cout << "Es minuscula" << endl;
		}
		if(x>='A' && x<='Z'){
		cout << "Es mayuscula" << endl;
		}
	}
}


//*programa que te pide una letra y te regresa su contraria*//
// a -> A
// A -> a
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char x;
	cin >> x;
	if(x>='a' && x<='z'){
		int dif = x - 'a';
		x = 'A' + dif;
		cout << x << endl;
	}
	else if(x>='A' && x<='Z'){
		int dif = x - 'A';
		x = 'a' + dif;
		cout << x <<  endl;
	}
}


//*Programa que te pide una palabra y te regresa letra por letra. separada por un salto de linea cada una*//
// Aldo
// A
// l
// d
// o
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string palabra;
	cin >> palabra;
	for(int i=0; i < palabra.size(); i++){
		cout << palabra[i] << endl;
	}
}


////* Programa que te pida una palabra y te la regrese completamente en mayuscula*//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string palabra;
	cin >> palabra;
	for(int i=0; i<palabra.size(); i++){
		if(palabra[i] >= 'a' && palabra[i] <= 'z'){
			int dif = palabra[i] - 'a';
			palabra[i] = 'A' + dif;
		}
	}
	cout << palabra;
}












