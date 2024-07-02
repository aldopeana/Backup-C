#include <stdio.h>

int main(){
  int N = 0;
  int calorias = 1;
  int sumaCalorias = 0;

  while (calorias != 0 && N <= 1000){
    scanf("%d", &calorias);
    if(calorias <= 10000){
        sumaCalorias = (sumaCalorias + calorias);
    }

    N +=1;
  }
  printf("%d", sumaCalorias);
  return 0;
}
