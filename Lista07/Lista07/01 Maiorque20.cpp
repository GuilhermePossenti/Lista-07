#include <stdio.h>

main(){
	int n[10];
	int i;
	int maior20 =0;
	
	for(i=0;i<10;i++){
		printf("Informe o valor %i: ", i+1);
		scanf("%i", &n[i]);
	}
	for(i=0;i<10;i++){
		if(n[i] > 20){
			printf("%d\n", n[i]);
			maior20 =1;
		}
	}
	if(!maior20) {
		printf("nenhum numero maior20 encontrado");
	}
	else{
		printf("\n");
	}
	
}
