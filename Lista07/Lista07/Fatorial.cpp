#include <stdio.h>
main(){
	int i;
	int n;
	int fatorial;
	
	printf("Informe o numero para calcular o fatoriial: ");
	scanf("%i", &n);
	
	for(i=n;i>0;i--){
		fatorial = fatorial * i;
	}
	printf("o fatorial de %i e: %i",n,fatorial);
}
