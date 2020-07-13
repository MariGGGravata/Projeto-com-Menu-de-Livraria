#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Jenyelle de almeida 1920008 :)



struct livros{
	
	char titulo[30];
	char autor[30];
	char estilo[30];
	int codigo;
	float preco;
};
	
int main(){
	
	struct livros l[50];
	
	char a, x[30];
	int i, j;
	
	for(i=0;i<=50;i++){
		
		printf("Digite I para incluir um livro. \n");
		printf("Digite L para listar o nome de todos os livros. \n");
		printf("Digite A para procurar livro por autor. \n");
		printf("Digite T para procurar livro por titulo. \n");
		printf("Digite M para calcular a media de preco de todos os livros. \n");
		printf("Digite S para sair \n\n\n");
	
		scanf("%c", &a);
				
		printf("\n");
		
		if(a=='I' || a=='i'){
			
			
			if(i < 50){
				
				fflush(stdin);
				printf("Coloque o titulo:\n");
				gets(l[i].titulo);
				printf("\nColoque o Autor:\n");
				gets(l[i].autor);
				printf("\nColoque o Estilo:\n");
				gets(l[i].estilo);
				printf("\nColoque o Codigo:\n");
				scanf("%d", &l[i].codigo);
				printf("\nQual o valor do Livro?\n");
				scanf("%f", &l[i].preco);
				fflush(stdin);
				printf("\n----------------\n");
				
			} else {
				
				printf("Nao e possivel colocar mais livros, escolha outra opcao.\n------------------\n");
				fflush(stdin);
				i--;
			}
			
			
		} else if(a=='L' || a=='l'){
		
			
			if(i == NULL){
				
				printf("Nao tem nenhum livro.");
				printf("\n-----------\n");
				fflush(stdin);
				
			} else{
				
				for(j=0;j<i;j++){
				
				printf("Livro %d:\n", j+1);
				printf("Titulo: %s\n", l[j].titulo);
				printf("Autor: %s\n", l[j].autor);
				printf("Estilo: %s\n",l[j].estilo);
				printf("Preco: %.2f\n", l[j].preco);
				printf("\n-----------\n");
				fflush(stdin);
			}
							
			}
			i--;
			
		} else if(a=='A' || a=='a'){
			
			fflush(stdin);
			printf("Qual o nome do Autor?\n");
			gets(x);
			fflush(stdin);
			int qtd = 0;			

			for(j=0;j<i;j++){
				
				if(strcmp(l[j].autor,x)==0){
					
					printf("\n----------\n");
					printf("O livro %d:\n", j+1);
					printf("Titulo: %s\n", l[j].titulo);
					printf("Autor: %s\n", l[j].autor);
					printf("Estilo: %s\n",l[j].estilo);
					printf("\n----------\n");
					qtd++;
				}
					
			}
			
			if(qtd == 0){
				
				printf("Autor nao encontrado.");
				printf("\n----------\n");
				
			}
			i--;
			
			
		} else if(a=='T' || a=='t'){
			
			fflush(stdin);
			printf("Qual o nome do Titulo?\n");
			gets(x);
			fflush(stdin);
			int qtd;
			
			for(j=0;j<i;j++){
				
				if(strcmp(l[j].titulo,x)==0){
					
					printf("\n----------\n");
					printf("O livro %d:\n", j+1);
					printf("Titulo: %s\n", l[j].titulo);
					printf("Autor: %s\n", l[j].autor);
					printf("Estilo: %s\n", l[j].estilo);
					printf("\n----------\n");
					qtd++;
					
				}
			}
			
			if(qtd == 0){
				
				printf("Titulo nao encontrado.");
				printf("\n----------\n");
				
			}
			
			i--;
			
		} else if(a=='M' || a=='m'){
			
			float total = 0 , qt = 0;
			
			for(j=0;j<i;j++){
				
				fflush(stdin);
				total = total + l[j].preco;
				qt++;
				
			}
			
			fflush(stdin);
			printf("O valor e R$%.2f\n\n", total/qt);
			i--;

		} else if(a=='S' || a=='s'){
			
			fflush(stdin);
			printf("Saindo...");
			break;
			
		} else{
			
			fflush(stdin);
			printf("Opcao nao encontrada, tente novamente.");
			printf("\n----------------\n");
			i--;
		}
			
	}
	return 0;
}
