#include <stdio.h>

int main ()
{
	int a,num,b,c,d,f,i;
	printf("inserta un numero");
	scanf("%d",&num);
	switch(num)
{
	case 10:
	printf("inserta un numero");
	scanf("%d",&a);
	printf("inserta un numero");
	scanf("%d",&b);
	printf("insertas un numero");
	scanf("%d",&c);
	printf("inserta un numero");
	scanf("%d",&d);
	f=(a+b+c+d)/4;
	printf("el promedio es %d",f);
	break;
	
	case 20:
	for(i=1;i<=5;i++){
	printf("inserta un numero");
	scanf("%d",&a);}
	
	break;
	default:
	printf("error");
}
	
}
