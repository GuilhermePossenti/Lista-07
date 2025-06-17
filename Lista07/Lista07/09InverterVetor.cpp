#include <stdio.h>

main(){
    int n;
    
    printf("Informe o tamanho do vetor: ");
    scanf("%i", &n);
    
    int vetor[n];
    int vetorInvertido[n];
    int i;
    
    // Preenchendo o vetor original
    for(i=0; i<n; i++){
        printf("Informe o valor %i: ", i+1);
        scanf("%i", &vetor[i]);
    }
    
    // Invertendo o vetor
    for(i=0; i<n; i++){
        vetorInvertido[i] = vetor[n-1-i];
    }
    
    printf("\nVetor original: ");
    for(i=0; i<n; i++){
        printf("%i ", vetor[i]);
    }
    
    printf("\nVetor invertido: ");
    for(i=0; i<n; i++){
        printf("%i ", vetorInvertido[i]);
    }
    printf("\n");
} 