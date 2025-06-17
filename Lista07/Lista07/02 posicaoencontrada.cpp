#include <stdio.h>

main(){
	int n[20];
	int i;
	int encontrou =0;
	
	for(i=0;i<20;i++){
		printf("Informe o valor %i: ",i+1);
		scanf("%i", &n[i]);
	}
	for(i=0;i<20;i++){
	if(n[i] == 10){
		printf("Posicao %d\n",i);
		encontrou =1;
		}	
	}
	if(!encontrou){
		printf("nenhum numero 10 encontrado..");
	}
}
