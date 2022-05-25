#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* receber 2 numeros 
e operador e fazer a validação (Do...While)
funçao para acada peração
fução menu
 */
float soma(float n1, float n2);
float subtracao(float n1, float num2);
float divicao(float n1, float num2);
float multiplicacao(float n1, float num2);
char le_valida_operador();
int main() {
	setlocale(LC_ALL,"portuguese");
	float n2,n1,resposta;
	char op;
	
	printf("________\n");
	printf("CALCULADORA\n");
	printf("¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n");
	printf("Entre com 1° numero: \n");
	scanf("%f",&n1);
    fflush(stdin);
	printf("Degite seu operador: \n");
	op = le_valida_operador();
	printf("Entre com 2° numero: \n");
	scanf("%f",&n2);
	printf("________\n");
	
	if(op=='+'){	
		resposta = soma(n1,n2);
		printf("%.2f%c%.2f = ",n1,op,n2,resposta);
		printf("%.2f",resposta);
	}else if (op=='-') {
		resposta = subtracao(n1,n2);
		printf("%.2f%c%.2f = ",n1,op,n2,resposta);
		printf("%.2f",resposta);
	}else if (op=='/'){
		resposta = divicao(n1,n2);
		printf("%.2f%c%.2f = ",n1,op,n2,resposta);
		printf("%.2f",resposta);
    }else if (op=='*'){
		resposta = multiplicacao(n1,n2);
		printf("%.2f%c%.2f = ",n1,op,n2,resposta);
		printf("%.2f",resposta);
	}else
return 0;
}
char le_valida_operador(){
	char operador;
	int cont=0;
	do{
		if(cont!=0){
			printf("OPERADOR INVALIDO\n");
			printf("digite o operador novamente: ");
		}
		scanf(" %c",&operador);	
		cont++;
	}while(operador!='+' && operador!='-' && operador!='*' && operador!='/');	
return operador;
}

float soma(float n1, float n2){
	float resposta;
	resposta=n1+n2;
return resposta;
}

float subtracao(float n1, float n2){
	float resposta;
	resposta = n1 - n2;
return resposta;
}

float divicao(float n1, float n2){
	float resposta;
	resposta = n1 / n2;
return resposta;
}

float multiplicacao(float n1, float n2){
	float resposta;
	resposta = n1 * n2;
return resposta;
}
