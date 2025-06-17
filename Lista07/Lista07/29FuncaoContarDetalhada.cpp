#include <stdio.h>

// Vetor declarado globalmente
int vetor[8] = {3, 7, 3, 1, 3, 8, 3, 5};
int tamanho = 8;

// Função 1: Conta ocorrências (versão básica)
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

// Função 2: Conta ocorrências e mostra posições
int contarOcorrenciasComPosicoes(int numero){
    int contador = 0;
    int i;
    
    printf("Posicoes onde o numero %i foi encontrado:\n", numero);
    
    for(i = 0; i < tamanho; i++){
        if(vetor[i] == numero){
            contador++;
            printf("  Posicao %i\n", i + 1);
        }
    }
    
    return contador;
}

// Função 3: Verifica se o número existe (retorna 1 ou 0)
int verificarExistencia(int numero){
    int i;
    
    for(i = 0; i < tamanho; i++){
        if(vetor[i] == numero){
            return 1; // Encontrou
        }
    }
    
    return 0; // Não encontrou
}

// Algoritmo principal
main(){
    int numero, quantidade;
    int opcao;
    
    printf("=== TESTE DE FUNCOES PARA CONTAR OCORRENCIAS ===\n\n");
    
    // Exibindo o vetor global
    printf("Vetor global: ");
    for(int i = 0; i < tamanho; i++){
        printf("%i ", vetor[i]);
    }
    printf("\n\n");
    
    printf("Escolha o tipo de teste:\n");
    printf("1 - Contar ocorrencias simples\n");
    printf("2 - Contar ocorrencias com posicoes\n");
    printf("3 - Verificar existencia\n");
    printf("Opcao: ");
    scanf("%i", &opcao);
    
    printf("\nDigite um numero para buscar: ");
    scanf("%i", &numero);
    
    switch(opcao){
        case 1:
            printf("\n--- Teste 1: Contagem Simples ---\n");
            quantidade = contarOcorrencias(numero);
            printf("O numero %i aparece %i vez(es) no vetor\n", numero, quantidade);
            break;
            
        case 2:
            printf("\n--- Teste 2: Contagem com Posicoes ---\n");
            quantidade = contarOcorrenciasComPosicoes(numero);
            printf("\nTotal de ocorrencias: %i\n", quantidade);
            break;
            
        case 3:
            printf("\n--- Teste 3: Verificar Existencia ---\n");
            if(verificarExistencia(numero)){
                printf("O numero %i EXISTE no vetor\n", numero);
            } else {
                printf("O numero %i NAO EXISTE no vetor\n", numero);
            }
            break;
            
        default:
            printf("Opcao invalida!\n");
    }
} 