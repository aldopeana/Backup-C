#include <stdio.h>

int main()
{
	int num,a;
	float c1,c2,c3,c4,calificaciones;
	int i;
	scanf("%d", &num);
	
	switch(num)
	{
		case 10:
			printf("Ingresa las 4 calificaciones");
			scanf("%f",&c1);
			scanf("%f",&c2);
			scanf("%f",&c3);
			scanf("%f",&c4);
			calificaciones = (c1 + c2 + c3+ c4)/4;
			printf("%f", calificaciones);
		break;
		case 20:
			for(i=1;i<=30;i++)
			{
				scanf("%d",&a);
			}
		break;
		default:
			printf("ERROR");
	}

}
