#include <stdio.h>
int MCD(int a, int b){
	if(a==0){
		return b;
	}
	return MCD(b%a, a);
}
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d", MCD(a,b));

}


