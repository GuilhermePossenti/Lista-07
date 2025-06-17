#include <stdio.h>

main(){
    int n;
    
    printf("Informe o tamanho do vetor: ");
    scanf("%i", &n);
    
    int vetor[n];
    int i, maior, menor;
    
    // Preenchendo o vetor
    for(i=0; i<n; i++){
        printf("Informe o valor %i: ", i+1);
        scanf("%i", &vetor[i]);
    }
    
    // Inicializando maior e menor com o primeiro elemento
    maior = vetor[0];
    menor = vetor[0];
    
    // Encontrando maior e menor
    for(i=1; i<n; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    
    printf("\nValores do vetor: ");
    for(i=0; i<n; i++){
        printf("%i ", vetor[i]);
    }
    
    printf("\nMaior valor: %i", maior);
    printf("\nMenor valor: %i\n", menor);
} 