#include <stdio.h>

main(){
    int n[12];
    int x[12];
    int y[12];
    int i, j = 0, k = 0;

    for(i=0;i<12;i++){
        printf("Informe o %i numero: ",i+1);
        scanf("%i", &n[i]);
    }
    for(i=0;i<12;i++){
        if(n[i] % 2 == 0 && n[i] % 3 == 0){
            x[j] = n[i];
            j++;
        }
        else if(n[i] % 2 != 0 && n[i] % 5 == 0){
            y[k] = n[i];
            k++;
        }
    }
    printf("Pares divisiveis por 3: ");
    for(i=0; i<j; i++){
        printf("%i ", x[i]);
    }
    printf("\nImpares divisiveis por 5: ");
    for(i=0; i<k; i++){
        printf("%i ", y[i]);
    }
     
}