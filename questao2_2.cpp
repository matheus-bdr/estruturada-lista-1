#include<stdio.h>
int main(){
	char nome[50], endereco[50], complemento[50], bairro[50], estado[50],cidade[50], boletosEmail, email[50], data[10], contato[50], assinatura[50],placa[50], modelo[50], cor[50], pessoaJu;
	char numero[50], cep[50], dddt[50], telefone[50],cnpj[50], dddc[50], celular[50],cpf[50],cnp[50], insEstadual[50], insMunicipal[50], cnae[50], dataNasci[50], telefoneCont[50];
        printf("------------DADOS DO CREDENCIADO------------\n");
	
		printf("Informe seu Nome Completo e Razao Social: ");
		scanf("%[^\n]s\n", &nome);
//		printf("%s\n", nome);
		
  		printf("Informe seu endereco: ");
        fflush(stdin);
		scanf("%[^\n]s\n", &endereco);
//		printf("%s\n", endereco);
		
		printf("Informe seu Numero: ");
		fflush(stdin);
		scanf("%[^\n]s\n", &numero);
//		printf("%s\n", numero);
								  
		printf("Informe seu complemento: ");
		fflush(stdin);
    	scanf("%[^\n]s\n", &complemento);
//		printf("%s\n", complemento);
		
		fflush(stdin);
		
		printf("Informe seu Bairro: ");
		fflush(stdin);
		scanf("%[^\n]s", &bairro);
//		printf("%s\n", bairro);
	
		fflush(stdin);
		
		printf("Informe seu CEP: ");
		scanf("%[^\n]s\n", &cep);
//		printf("%s\n", cep);
		
		fflush(stdin);
		
		printf("Informe seu Estado: ");
		fflush(stdin);
		scanf("%[^\n]s\n", &estado);
//		printf("%s\n", estado);
		
		fflush(stdin);
		
		printf("Informe sua cidade: ");
		scanf("%[^\n]s\n", &cidade);
//		printf("%s\n", cidade);
		
		fflush(stdin);
		
		printf("Informe seu ddd: ");
		scanf("%[^\n]s\n", &dddt);
//		printf("%s\n", dddt);
		
		fflush(stdin);
		
		printf("Informe seu Telefone residencial ou comercial: ");
		scanf("%[^\n]s\n", &telefone);
//		printf("%s\n", telefone);
		
		fflush(stdin);
		
		printf("Informe o ddd do seu numero de celular  ");
		scanf("%[^\n]s\n", &dddc);
//		printf("%s\n", dddc);
		
		fflush(stdin);
		
		printf("Informe seu numero de celular: ");
		scanf("%[^\n]s\n", &celular);
//		printf("%s\n", celular);
		
		fflush(stdin);
		
		printf("Informe seu cpf: ");
		scanf("%[^\n]s\n", &cpf);
//		printf("%s\n", cpf);
		
		fflush(stdin);
		
		/*printf("caso deseje receber boletos por email digite s, caso contrario n: ");
		fflush(stdin);
		scanf("%c\n", &boletosEmail);*/
//		printf("%c\n", boletosEmail);
		
		fflush(stdin);
		
        printf("se voce for uma pessoa juridica, digite s, caso nao seja digite n: ");
		fflush(stdin);
		pessoaJu = getchar(); //pega os caracteres 's'
		fflush(stdin);
				//-----------------------------------------------------------------------------------------------------------------------------------------------------
		if(pessoaJu == 's'){
			fflush(stdin);
			printf("Informe seu cnpj ");
			scanf("%[^\n]s\n", &cnpj);
//			printf("%s\n", cnpj);
			
			fflush(stdin);
			
			printf("Informe sua insEstadual ");
			scanf("%[^\n]s\n", &insEstadual);
//			printf("%s\n", insEstadual);
			
			
			fflush(stdin);
			printf("Informe seu insMunicipal ");
			scanf("%[^\n]s\n", &insMunicipal);
//			printf("%s\n",insMunicipal);
			
			fflush(stdin);
			
			printf("Informe seu CNAE ");
			scanf("%[^\n]s\n", &cnae);
//			printf("%s\n",cnae);
			
			fflush(stdin);
			
			printf("Informe seu contato do responsavel: ");
			fflush(stdin);
			scanf("%[^\n]s\n", contato);
//			printf("%s\n", contato);
			
			fflush(stdin);
			
			printf("Informe seu Telefone comercial  ");
			scanf("%[^\n]s\n", &telefoneCont);
//			printf("%s\n", telefoneCont);
        }
		
		//------------------------------------------------------------------------------------------------------------------------
			fflush(stdin);
		printf("Informe a data  ");
			fflush(stdin);
			
		scanf("%[^\n]s\n", &data);
		
//		printf("%s\n", data);
		fflush(stdin);
		printf("Assinatura do resposavel: ");
		scanf("%[^\n]s\n", &assinatura);
//		printf("%s\n", assinatura);
		fflush(stdin);
		printf("\n\n- - - - - - - -DADOS DO VEICULO- - - - - - - -\n\n");
		fflush(stdin);
		printf("Informe a placa do veiculo ");
		scanf("%[^\n]s\n", &placa);
//		printf("%s\n", placa);
		fflush(stdin);
		printf("Informe o modelo do veiculo  ");
		scanf("%[^\n]s\n", &modelo);
//		printf("%s\n", modelo);
		fflush(stdin);
		printf("Informe a cor do veiculo: ");
		scanf("%[^\n]s\n", &cor);
//		printf("%s\n", cor);
        //----------------------------------------------------------------------------------------------------------------------
        //prints
        	printf("nome completo: %s\n", nome);
        	printf("endereco: %s\n", endereco);
        	printf("numero: %s\n", numero);
        	printf("complemento: %s\n", complemento);
        	printf("bairro: %s\n", bairro);
        	printf("CEP: %s\n", cep);
        	printf("estado:%s\n", estado);
        	printf("cidade: %s\n", cidade);
        	printf("DDD do telefone: %s\n", dddt);
        	printf("numero de telefone: %s\n", telefone);
        	printf("DDD do numero de celular: %s\n", dddc);
        	printf("DDD do celular: %s\n", celular);
        	printf("numero de CPF: %s\n", cpf);
        	printf("Deseja que envie boletos por email: %c\n", boletosEmail);
        		//pode ser que de erro aqui 
        		if(pessoaJu == 's'){
			printf("CNPJ: %s\n", cnpj);
        	printf("inscricao estadual: %s\n", insEstadual);
        	printf("inscricao municipal: %s\n",insMunicipal);
        	printf("CNAE: %s\n",cnae);
        	printf("contato: %s\n", contato);
        	printf("telefone de contato: %s\n", telefoneCont);
        }else{
		
        	printf("data: %s\n", data);
			printf("Assinatura: %s\n", assinatura);
			printf("placa do veiculo: %s\n", placa);
			printf("modelo do veiculo:%s\n", modelo);
			printf("cor do veiculo : %s\n", cor);
        }
        	
        	
        	
        return 0;
}
