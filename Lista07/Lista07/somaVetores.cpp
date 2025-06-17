#include <stdio.h>

int main(){
    int vetor1[5], vetor2[5], resultado[5];
    int i, tamanho;
    
    printf("Digite o tamanho dos vetores (maximo 5): ");
    scanf("%d", &tamanho);
    
    // Lendo o primeiro vetor
    printf("\nDigite os elementos do primeiro vetor:\n");
    for(i = 0; i < tamanho; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor1[i]);
    }
    
    // Lendo o segundo vetor
    printf("\nDigite os elementos do segundo vetor:\n");
    for(i = 0; i < tamanho; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor2[i]);
    }
    
    // Somando os vetores
    for(i = 0; i < tamanho; i++){
        resultado[i] = vetor1[i] + vetor2[i];
    }
    
    // Exibindo os vetores originais
    printf("\nPrimeiro vetor: [");
    for(i = 0; i < tamanho; i++){
        printf("%d", vetor1[i]);
        if(i < tamanho - 1) printf(", ");
    }
    printf("]");
    
    printf("\nSegundo vetor: [");
    for(i = 0; i < tamanho; i++){
        printf("%d", vetor2[i]);
        if(i < tamanho - 1) printf(", ");
    }
    printf("]");
    
    // Exibindo o resultado
    printf("\nVetor resultado: [");
    for(i = 0; i < tamanho; i++){
        printf("%d", resultado[i]);
        if(i < tamanho - 1) printf(", ");
    }
    printf("]");
    
    return 0;
} 