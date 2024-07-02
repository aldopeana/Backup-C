#include <iostream>
using namespace std;

int divisores()
{
	int a, c=0;
	cin >> a;
	if(a == 0){
		return 0;
	}
	print(12);
	for(int i=1; i<=a; i++){
		if(a%i==0){
			cout << i << " ";
			c++;
		}
	}
	cout << endl;
	cout << c;
	return 1;
}

int main(){
	while(divisores()){
		
	}
	
}
