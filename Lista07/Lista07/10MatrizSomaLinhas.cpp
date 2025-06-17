#include <stdio.h>

main(){
    int linhas, colunas;
    int i, j, soma;
    
    printf("Informe o numero de linhas da matriz: ");
    scanf("%i", &linhas);
    printf("Informe o numero de colunas da matriz: ");
    scanf("%i", &colunas);
    
    int matriz[linhas][colunas];
    
    // Preenchendo a matriz
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("Informe o valor da posicao [%i][%i]: ", i+1, j+1);
            scanf("%i", &matriz[i][j]);
        }
    }
    
    // Exibindo a matriz
    printf("\nMatriz:\n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("%i\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    // Calculando a soma de cada linha
    printf("\nSoma de cada linha:\n");
    for(i=0; i<linhas; i++){
        soma = 0;
        for(j=0; j<colunas; j++){
            soma += matriz[i][j];
        }
        printf("Linha %i: %i\n", i+1, soma);
    }
} 