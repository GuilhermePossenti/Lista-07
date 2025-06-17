#include <stdio.h>

main(){
    int n;
    float soma = 0, media;
    
    printf("Informe o tamanho do vetor: ");
    scanf("%i", &n);
    
    int vetor[n];
    int i;
    
    // Preenchendo o vetor
    for(i=0; i<n; i++){
        printf("Informe o valor %i: ", i+1);
        scanf("%i", &vetor[i]);
        soma += vetor[i];
    }
    
    // Calculando a média
    media = soma / n;
    
    printf("\nValores do vetor: ");
    for(i=0; i<n; i++){
        printf("%i ", vetor[i]);
    }
    
    printf("\nSoma dos valores: %.2f", soma);
    printf("\nMedia dos valores: %.2f\n", media);
} 