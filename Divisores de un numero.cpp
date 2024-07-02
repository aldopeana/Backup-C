#include <stdio.h>
int main()
{
	int a, c=0,b;
	scanf("%d", &a);
	for(int i=1; i<=a; i++){
		if(a%i==0){
			c++;
		}
	}
printf("%d\n", c);
for(int i=1; i<=a; i++){
		if(a%i==0){
			printf("%d ", i);
		}
	}
	return 0;
}
