#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL,"portuguese");
	int idade;
		printf("SISTEMA ELEITORAL\n");
		printf("Entre com sua idade: ");
		scanf("%d",&idade);
	if(idade<1){
		printf("Voc� ainda n�o nasceu");
	}else{ 
		if(idade<16){
				printf("Voc� n�o vota");
		}else{
			if(idade==16){
				printf("Seu voto � opcional");
			}else{
				if(idade==17){
					printf("Seu voto � opcional");
				}else{	
					if(idade==41){
						printf("\nGanha premio 1.");
					}else{
						if(idade==82){
							printf("\nGanha premio 2.");
						}else{
							if(idade<65){
								printf("Seu voto � obrigat�rio");
							}else{
								if(idade>64){
									printf("Seu voto � opcional");	
								}
								else{	
								}
							}
						}
					}
				}
			}
  		}
	}
	
return 0;		
}
