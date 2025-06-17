#include <stdio.h>

// Vetor declarado globalmente
int vetor[10] = {5, 2, 8, 5, 1, 5, 9, 2, 5, 3};
int tamanho = 10;

// Função que conta ocorrências de um número no vetor
int contarOcorrencias(int numero){
    int contador = 0;
    int i;
    
    for(i = 0; i < tamanho; i++){
        if(vetor[i] == numero){
            contador++;
        }
    }
    
    return contador;
}

// Algoritmo principal para testar a função
main(){
    int numero, quantidade;
    
    printf("=== FUNCAO PARA CONTAR OCORRENCIAS ===\n\n");
    
    // Exibindo o vetor global
    printf("Vetor global: ");
    for(int i = 0; i < tamanho; i++){
        printf("%i ", vetor[i]);
    }
    printf("\n\n");
    
    // Testando a função
    printf("Digite um numero para buscar: ");
    scanf("%i", &numero);
    
    // Chamando a função
    quantidade = contarOcorrencias(numero);
    
    // Exibindo resultado
    printf("\nResultado:\n");
    printf("O numero %i aparece %i vez(es) no vetor\n", numero, quantidade);
    
    if(quantidade == 0){
        printf("O numero nao foi encontrado!\n");
    } else if(quantidade == 1){
        printf("O numero aparece uma vez no vetor\n");
    } else {
        printf("O numero aparece %i vezes no vetor\n", quantidade);
    }
} 