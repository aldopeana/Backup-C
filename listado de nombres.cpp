#include <stdio.h>
#include <string>
using namespace std;

int main()
{
	int i;
	string nombres[5];
	
	for(i=0;i<5;i++)
	{
		printf("ingrese nombres\n");
		scanf("%s", &nombres[i]);
	}
	printf("Listado de nombres\n");
	
	for(i=0;i<5;i++)
	{
		printf("%s\n",&nombres[i]);
	}
	return 0;
}
