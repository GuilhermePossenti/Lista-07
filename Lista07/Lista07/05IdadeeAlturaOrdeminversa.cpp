/*5 - Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada 
informação no seu respectivo vetor. Imprima a idade e a altura na ordem inversa a 
ordem lida. */
#include <stdio.h>

main(){
    int idade[5];
    float altura[5];
    int i;

    for(i=0;i<5;i++){
        printf("Informe a idade da %i pessoa: ", i+1);
        scanf("%i", &idade[i]);
        printf("Informe a altura da %i pessoa: ", i+1);
        scanf("%f", &altura[i]);
    }

    for(i=4;i>=0;i--){
        printf("Idade: %d\n", idade[i]);
        printf("Altura: %.2f\n", altura[i]);
    }

}