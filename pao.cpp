#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int paotrad, paotemp, paorech, paodoce, resp, resp2, op ;
	
	printf("\n---- PRODUTOS EM ESTOUQUE  ----\n");
	
	printf("Digite a quantidade de pão de queijo tradicional: ");
	scanf("%d", &paotrad);
	printf("Digite a quantidade de pão de queijo temperado: ");
	scanf("%d", &paotemp);
	printf("Digite a quantidade de pão de queijo recheado: ");
	scanf("%d", &paorech);
	printf("Digite a quantidade de pão de queijo doce: ");
	scanf("%d", &paodoce);
	system("cls");
	do{
		printf("\n---- CONSULTA DO ESTOQUE ----\n");
		printf("Pães de queijo tradicionais: %d\n", paotrad);
	 	printf("Pães de queijo temperados: %d\n", paotemp);
	 	printf("Pães de queijo recheados: %d\n", paorech);
	 	printf("Pães de queijo doces: %d\n", paodoce);
		
	printf("\n---- MÉTODOS ----\n");
	printf(" [1] ENTRADAS\n [2] SAÍDAS\n [0] FECHAR\n");
	scanf("%d", &resp);
	 switch(resp){
	 	
	 	
	 	
	 	case 1:
	 		
	 		
	 		printf("\n---- ENTRADA ----\n");
	 		printf(" [1] PÃO DE QUEIJO TRADICIONAL\n [2] PÃO DE QUEIJO TEMPERADO\n [3] PÃO DE QUEIJO RECHEADO\n [4] PÃO DE QUEIJO DOCE\n [0] RETORNAR\n");
	 		scanf("%d", &resp);
	 		
	 		switch(resp){
	 			case 1:
	 		
	 				printf("Quantos pães de queijo você quer adicionar: ");
	 				scanf("%d", &op);
	 				paotrad+=op;
	 				printf("Digite 0 sair: ");
	 				scanf("%d", &resp2);
	 				break;
	 			case 2:
	 				
	 				printf("Quantos pães de queijo você quer adicionar: ");
	 				scanf("%d", &op);
	 				paotemp+=op;
	 				printf("Digite 0 sair: ");
	 				scanf("%d", &resp2);
	 				break;
	 			case 3:
	 				
	 				printf("Quantos pães de queijo você quer adicionar: ");
	 				scanf("%d", &op);
	 				paorech+=op;
	 				printf("Digite 0 sair: ");
	 				scanf("%d", &resp2);
	 				break;
	 			case 4:
	 				
	 				printf("Quantos pães de queijo você quer adicionar: ");
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
	 		
	 		
	 		printf("\n---- SAÍDAS ----\n");
	 		printf(" [1] PÃO DE QUEIJO TRADICIONAL\n [2] PÃO DE QUEIJO TEMPERADO\n [3] PÃO DE QUEIJO RECHEADO\n [4] PÃO DE QUEIJO DOCE\n [0] RETORNAR\n");
	 		scanf("%d", &resp);
	 		
	 		switch(resp){
	 			case 1:
	 		
	 				printf("Quantos pães de queijo você quer retirar: ");
	 				scanf("%d", &op);
	 				paotrad-=op;
	 				printf("Digite 0 sair: ");
					scanf("%d", &resp2);
	 				break;
	 			case 2:
	 				
	 				printf("Quantos pães de queijo você quer retirar: ");
	 				scanf("%d", &op);
	 				paotemp-=op;
	 				printf("Digite 0 sair: ");
	 				scanf("%d", &resp2);
	 				break;
	 			case 3:
	 				
	 				printf("Quantos pães de queijo você quer retirar: ");
	 				scanf("%d", &op);
	 				paorech-=op;
	 				printf("Digite 0 sair: ");
	 				scanf("%d", &resp2);
	 				break;
	 			case 4:
	 				
	 				printf("Quantos pães de queijo você quer retirar: ");
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
