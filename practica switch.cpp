#include <iostream>
using namespace std;

int main()
{
	int num,a,c1,c2,c3,c4,calificaciones;
	int i;
	cin >> num;
	
	switch(num)
	{
		case 10:
			cout << "Ingresa las calificaciones" << endl;
			cin >> c1;
			cin >> c2;
			cin >> c3;
			cin >> c4;
			calificaciones = (c1 + c2 + c3+ c4)/4;
			cout << calificaciones << endl;u7
		break;
		case 20:
			for(i=1;i<=30;i++)
			{
				cin >> a;
			}
		break;
		default:
			cout << "ERROR" << endl;
	}

}
