#include <stdio.h>
 
int main() {
    int n,i,ok,p;
    printf("Introduce un n�mero entero:");
    scanf("%d",&n);
    for(i = 1;i<=n;i++) {
        ok = 0;
        for(p = 2;p<i;p++) {
            if(i%p == 0) { ok = 1; break; }
        }
        if(ok != 1)
		{
			printf("%d es n�mero primo",i); 
		}
    }
    return 0;
}
