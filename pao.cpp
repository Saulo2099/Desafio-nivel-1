#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int paotrad, paotemp, paorech, paodoce, resp, resp2, op ;
	
	printf("\n---- PRODUTOS EM ESTOUQUE  ----\n");
	
	printf("Digite a quantidade de p�o de queijo tradicional: ");
	scanf("%d", &paotrad);
	printf("Digite a quantidade de p�o de queijo temperado: ");
	scanf("%d", &paotemp);
	printf("Digite a quantidade de p�o de queijo recheado: ");
	scanf("%d", &paorech);
	printf("Digite a quantidade de p�o de queijo doce: ");
	scanf("%d", &paodoce);
	system("cls");
	do{
		printf("\n---- CONSULTA DO ESTOQUE ----\n");
		printf("P�es de queijo tradicionais: %d\n", paotrad);
	 	printf("P�es de queijo temperados: %d\n", paotemp);
	 	printf("P�es de queijo recheados: %d\n", paorech);
	 	printf("P�es de queijo doces: %d\n", paodoce);
		
	printf("\n---- M�TODOS ----\n");
	printf(" [1] ENTRADAS\n [2] SA�DAS\n [0] FECHAR\n");
	scanf("%d", &resp);
	 switch(resp){
	 	
	 	
	 	
	 	case 1:
	 		
	 		
	 		printf("\n---- ENTRADA ----\n");
	 		printf(" [1] P�O DE QUEIJO TRADICIONAL\n [2] P�O DE QUEIJO TEMPERADO\n [3] P�O DE QUEIJO RECHEADO\n [4] P�O DE QUEIJO DOCE\n [0] RETORNAR\n");
	 		scanf("%d", &resp);
	 		
	 		switch(resp){
	 			case 1:
	 		
	 				printf("Quantos p�es de queijo voc� quer adicionar: ");
	 				scanf("%d", &op);
	 				paotrad+=op;
	 				printf("Digite 0 sair: ");
	 				scanf("%d", &resp2);
	 				break;
	 			case 2:
	 				
	 				printf("Quantos p�es de queijo voc� quer adicionar: ");
	 				scanf("%d", &op);
	 				paotemp+=op;
	 				printf("Digite 0 sair: ");
	 				scanf("%d", &resp2);
	 				break;
	 			case 3:
	 				
	 				printf("Quantos p�es de queijo voc� quer adicionar: ");
	 				scanf("%d", &op);
	 				paorech+=op;
	 				printf("Digite 0 sair: ");
	 				scanf("%d", &resp2);
	 				break;
	 			case 4:
	 				
	 				printf("Quantos p�es de queijo voc� quer adicionar: ");
	 				scanf("%d", &op);
	 				paodoce+=op;
	 				printf("Digite 0 sair: ");
	 				scanf("%d", &resp2);
	 				break;
	 			
				case 5:
					scanf("%d", &resp2);
		 			break;
			 
		
			
			 
			 }
			 break;
			case 2:
	 		
	 		
	 		printf("\n---- SA�DAS ----\n");
	 		printf(" [1] P�O DE QUEIJO TRADICIONAL\n [2] P�O DE QUEIJO TEMPERADO\n [3] P�O DE QUEIJO RECHEADO\n [4] P�O DE QUEIJO DOCE\n [0] RETORNAR\n");
	 		scanf("%d", &resp);
	 		
	 		switch(resp){
	 			case 1:
	 		
	 				printf("Quantos p�es de queijo voc� quer retirar: ");
	 				scanf("%d", &op);
	 				paotrad-=op;
	 				printf("Digite 0 sair: ");
					scanf("%d", &resp2);
	 				break;
	 			case 2:
	 				
	 				printf("Quantos p�es de queijo voc� quer retirar: ");
	 				scanf("%d", &op);
	 				paotemp-=op;
	 				printf("Digite 0 sair: ");
	 				scanf("%d", &resp2);
	 				break;
	 			case 3:
	 				
	 				printf("Quantos p�es de queijo voc� quer retirar: ");
	 				scanf("%d", &op);
	 				paorech-=op;
	 				printf("Digite 0 sair: ");
	 				scanf("%d", &resp2);
	 				break;
	 			case 4:
	 				
	 				printf("Quantos p�es de queijo voc� quer retirar: ");
	 				scanf("%d", &op);
	 				paodoce-=op;
	 				printf("Digite 0 sair: ");
	 				scanf("%d", &resp2);
	 				break;
	 			
				case 5:
					
					scanf("%d", &resp2);
	 				break;
				}
				break;
			case 0:
				system("pause");
    			exit(0);
    			break;
			}
	 
	 


 system("cls");
} while(resp2!='0');
}
