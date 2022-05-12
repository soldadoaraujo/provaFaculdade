#include <stdio.h>
#include <stdlib.h>
#include <math.h>
	struct projetos{
			int codigo;
			char titulo[50];
			char descricao[250];	
			int ano;
			int status;	
			float duracao;
			int membros;
			char gerente[50];
			float valor;
			};
	struct projetos arquivo[200];
int menu();
			int menu(){
			int esc;
			printf("Escolha uma das opçoes a seguir \n");
			printf("Opçao 1 - Cadastrar novo projeto  \n");
			printf("Opçao 2 - Todos os projetos  \n");
			printf("Opçao 3 - Todos os projetos com o Status: 1 (A Fazer) \n");
			printf("Opçao 4 - Todos os projetos com o Status: 2 (Fazendo)  \n");
			printf("Opçao 5 - Todos os projetos com o Status: 3 (Concluido) \n");
			printf("Opçao 6 - Todos os projetos do ano escolhido  \n");
			printf("Opçao 7 - Sair  \n");
			fflush(stdin);
			scanf("%d",&esc);
			return esc;
		}
int lista();
			int lista(){
				int i;
				for(i=0;i<=199;i++){
					printf("\nCodigo: %d \nTitulo: %s \nDescrição: %s \nAno: %d \nDuração: %f \nMembros: %d \nValor: %f \nGerente: %s \nStatus: %d \n\n ",arquivo[i].codigo,arquivo[i].titulo,arquivo[i].descricao,arquivo[i].ano,arquivo[i].duracao,arquivo[i].membros,arquivo[i].valor,arquivo[i].gerente,arquivo[i].status);
					};	};


int busca_afazer(){
int i=0;
	while (i<=199){
		if (arquivo[i].status==1){
			printf("\nCodigo: %d \nTitulo: %s \nDescrição: %s \nAno: %d \nDuração: %f \nMembros: %d \nValor: %f \nGerente: %s \nStatus: %d \n\n ",arquivo[i].codigo,arquivo[i].titulo,arquivo[i].descricao,arquivo[i].ano,arquivo[i].duracao,arquivo[i].membros,arquivo[i].valor,arquivo[i].gerente,arquivo[i].status);		
}
i++;	
}



}

int busca_fazendo(){
int i=0;
	while (i<=199){
		if (arquivo[i].status==2){
			printf("\nCodigo: %d \nTitulo: %s \nDescrição: %s \nAno: %d \nDuração: %f \nMembros: %d \nValor: %f \nGerente: %s \nStatus: %d \n\n ",arquivo[i].codigo,arquivo[i].titulo,arquivo[i].descricao,arquivo[i].ano,arquivo[i].duracao,arquivo[i].membros,arquivo[i].valor,arquivo[i].gerente,arquivo[i].status);		
}
i++;	
}





}

int busca_concluido(){
int i=0;
	while (i<=199){
		if (arquivo[i].status==3){
			printf("\nCodigo: %d \nTitulo: %s \nDescrição: %s \nAno: %d \nDuração: %f \nMembros: %d \nValor: %f \nGerente: %s \nStatus: %d \n\n ",arquivo[i].codigo,arquivo[i].titulo,arquivo[i].descricao,arquivo[i].ano,arquivo[i].duracao,arquivo[i].membros,arquivo[i].valor,arquivo[i].gerente,arquivo[i].status);		
}
i++;	
}



}

int busca_ano(){
int i=0, resp;
	printf("Digite o ano que deseja buscar \n");
	scanf("%d",&resp);
		while (i<=199){
			if (arquivo[i].ano==resp){
				printf("\nCodigo: %d \nTitulo: %s \nDescrição: %s \nAno: %d \nDuração: %f \nMembros: %d \nValor: %f \nGerente: %s \nStatus: %d \n\n ",arquivo[i].codigo,arquivo[i].titulo,arquivo[i].descricao,arquivo[i].ano,arquivo[i].duracao,arquivo[i].membros,arquivo[i].valor,arquivo[i].gerente,arquivo[i].status);		
			}
i++;	
						}

} 


int main(){
	int i,esc;
		
	while(esc<7){
		esc=menu();
		switch (esc){
	
	
			case(1):
				for(i=0;i<=199;i++){ 
				printf("Codigo do projeto %d  \n",i,arquivo[i].codigo);
				arquivo[i].codigo=i;
				printf("Digite o titulo do projeto \n");
				fflush(stdin);
				scanf("%s",arquivo[i].titulo);
				printf("Digite a descriçao do projeto  \n");
				fflush(stdin);
				scanf("%s",arquivo[i].descricao);
				printf("Digite o ano de realizaçao \n");
				fflush(stdin);
				scanf("%d",&arquivo[i].ano);
				printf("Digite a duraçao prevista em dias do projeto \n");
				fflush(stdin);
				scanf("%f",&arquivo[i].duracao);
				printf("Digite a quantidade de membros na equipe \n");
				fflush(stdin);
				scanf("%d",&arquivo[i].membros);
				printf("Digite o valor previsto do projeto \n");
				fflush(stdin);
				scanf("%f",&arquivo[i].valor);
				printf("Digite o nome do gerente responsavel \n");
				fflush(stdin);
				scanf("%s",arquivo[i].gerente);
				printf("Digite o status do projeto (1 A fazer 2 Fazendo 3 Concluido ) \n");
				fflush(stdin);
				scanf("%d",&arquivo[i].status);	
			
			}
			break;	
			
						
			
			case(2):
				lista();
				break;
		
			case(3):
				busca_afazer();
				break;
		
			case(4):
				busca_fazendo();
				break;
			case(5):
				busca_concluido();
				break;
			case(6):
				busca_ano();
				break;
			case(7):
				printf("Programa encerrado \n");
				break;
			default:
				printf("Opçao invalida");
				break;	
		
		
		
		
				}
		
		
		
		
	
	
	

	
	

			
		



	
}
return 0;
}
