#include <stdio.h>

main(){
    int matriz[6][6];
    int i, j;
    
    printf("=== MATRIZ 6x6 COM BORDAS ===\n\n");
    
    // Preenchendo a matriz: 1 nas bordas, 0 no interior
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            // Verifica se está na borda (primeira ou última linha/coluna)
            if(i == 0 || i == 5 || j == 0 || j == 5){
                matriz[i][j] = 1; // Borda
            } else {
                matriz[i][j] = 0; // Interior
            }
        }
    }
    
    // Exibindo a matriz
    printf("Matriz 6x6 com bordas:\n");
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nExplicacao:\n");
    printf("- 1 = Borda da matriz\n");
    printf("- 0 = Interior da matriz\n");
} 