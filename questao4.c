#include <string.h> 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
    int i, tam, j, g, x = 0, indice;
    char nome[350], r[30];
    printf("Transfoma��o dos nomes em modelo de cita��o cientifica: \n");
    printf("N�o esque�am que os conectivos de nome:da,de,di etc... N�o contam para a transforma��o dos nomes no modelo de cita��o cientifica, por favor escrevam o nome sem eles");
    printf("Escreve o nome, por favor: ");
   
    scanf("%[^\n]s",&nome);
    tam = strlen(nome);
    r[x] = nome[0];
    x++;
    
    for(i = 0; i < tam; ++i){
        if(nome[i] == ' ' && nome[i+1] != ' '){
           r[x] = nome[i + 1]; 
           x++;
           indice = i + 1;
        }
    }

    for(g = indice; g < tam; g++){ 
        printf("%c", toupper(nome[g])); 
        
    }
    
    printf(", ");
    
    for(j = 0; j < x - 1; j++){ //For usado para printar as letras
        printf("%c.", toupper(r[j]));
    }
    
    printf(";");
}

