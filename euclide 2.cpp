#include <stdio.h>

int MCD(int A, int B){


	while(A != B){
		if (A < B){
			B = B - A;
		} else {
			A = A - B;
		}
	}

	return A;
}


int main(){
	int A, B;
	MCD(A,B);
}
