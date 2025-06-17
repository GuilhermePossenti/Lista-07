#include <stdio.h>

main(){
	int n;
	int soma = 0;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%i", &n);
	
	int vetor[n];
	int i;
	
	for(i=0; i<n;i++){
		printf("Informe o valor %i: ",i+1);
		scanf("%i", &vetor[i]);
	}
	
	for(i=0;i<n;i++){
		if(vetor[i] % 2 == 0){
			soma += vetor[i];
		}
	}
	printf("A soma dos elementos de índice par é: %i\n", soma);
}
