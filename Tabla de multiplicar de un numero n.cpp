#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	cout << "\n";
	
	for(int i=1; i<=10; i++){
		cout << n << " x " << i << " = " << n*i /*<< "\n" */<< endl;
	}
}

