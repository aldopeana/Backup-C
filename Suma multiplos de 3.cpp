#include <iostream>
using namespace std;
int main()
{
	int a,c;
	for(int i=1; i<=5; i++){
		cin >> a;
		if(a%3==0){
			c = c+a;
		}
	}
	cout << "\n" << c;
}
