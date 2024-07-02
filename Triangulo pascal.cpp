#include "stdio.h"

int main(int argc, char *argv[]){

   int pasc[10000];
   int n;
   int x, i, j;
   
   scanf("%d", &n);

   x=0;

   for (i=0; i<n ; i++)
   {
         for (j=x; j>=0; j--)
         {
             if(j==x || j==0)
             {
                  pasc[j] = 1;
             }
             else
             {
                  pasc[j] = pasc[j] + pasc[j-1];
             }
         }

        x++;
        printf("\n");
        for (j=0; j<=n-i; j++)
             printf(" ");

        for(j=0; j<x; j++)
        {
            if(pasc[j] %2 == 0){
                printf(". ");
            }else{
            	printf("* ");
			}
            
        }
   }
return 0;
}
