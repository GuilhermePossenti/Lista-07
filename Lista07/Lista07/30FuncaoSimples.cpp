#include <stdio.h>

// Vetor declarado globalmente
int vetor[6] = {4, 2, 4, 7, 4, 1};

// Função que conta ocorrências de um número no vetor
int contarOcorrencias(int numero){
    int contador = 0;
    int i;
    
    for(i = 0; i < 6; i++){
        if(vetor[i] == numero){
            contador++;
        }
    }
    
    return contador;
}

// Algoritmo principal
main(){
    int numero, quantidade;
    
    printf("Vetor: 4 2 4 7 4 1\n");
    printf("Digite um numero: ");
    scanf("%i", &numero);
    
    quantidade = contarOcorrencias(numero);
    
    printf("O numero %i aparece %i vez(es)\n", numero, quantidade);
} 