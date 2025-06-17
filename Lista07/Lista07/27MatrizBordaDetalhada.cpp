#include <stdio.h>

main(){
    int matriz[6][6];
    int i, j;
    
    printf("=== MATRIZ 6x6 COM BORDAS - PROCESSO DETALHADO ===\n\n");
    
    // Inicializando toda a matriz com 0
    printf("1. Inicializando matriz com zeros:\n");
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            matriz[i][j] = 0;
        }
    }
    
    // Exibindo matriz inicial
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // Preenchendo as bordas com 1
    printf("\n2. Preenchendo as bordas com 1:\n");
    
    // Borda superior (primeira linha)
    printf("   Borda superior (linha 0):\n");
    for(j=0; j<6; j++){
        matriz[0][j] = 1;
    }
    
    // Borda inferior (última linha)
    printf("   Borda inferior (linha 5):\n");
    for(j=0; j<6; j++){
        matriz[5][j] = 1;
    }
    
    // Borda esquerda (primeira coluna)
    printf("   Borda esquerda (coluna 0):\n");
    for(i=0; i<6; i++){
        matriz[i][0] = 1;
    }
    
    // Borda direita (última coluna)
    printf("   Borda direita (coluna 5):\n");
    for(i=0; i<6; i++){
        matriz[i][5] = 1;
    }
    
    // Exibindo matriz final
    printf("\n3. Matriz final:\n");
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n=== RESULTADO ===\n");
    printf("Matriz 6x6 com bordas preenchidas:\n");
    printf("1 1 1 1 1 1\n");
    printf("1 0 0 0 0 1\n");
    printf("1 0 0 0 0 1\n");
    printf("1 0 0 0 0 1\n");
    printf("1 0 0 0 0 1\n");
    printf("1 1 1 1 1 1\n");
} 