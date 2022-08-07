#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char nome[40];
	float nota1,nota2,nota3,nota4,rec;
	float media = 7;
			
	printf("===========================================================\n");
	
	printf("           Logo abaixo digite as informações do aluno \n");
	
	printf("------------------------------------------------------------\n");
	
	printf(" Nome completo: ", &nome);// aqui vai o nome
	fgets(nome,sizeof(nome),stdin);
	
	printf("------------------------------------------------------------\n");
	
	do{
	printf(" Digite nota-1: ", nota1);// aqui vai a nota 1
	scanf(" %f",&nota1);
	
	if(nota1>10)  printf("Nota invalida\n");	
	}while(nota1>10);
	
	do{
	printf(" Digite nota-2: ", nota2);// aqui vai a nota 1
	scanf(" %f",&nota2);
	
	if(nota2>10)  printf("Nota invalida\n");	
	}while(nota2>10);	
	
	do{
	printf(" Digite nota-3: ", nota3);// aqui vai a nota 1
	scanf(" %f",&nota3);
	
	if(nota3>10)  printf("Nota invalida\n");	
	}while(nota3>10);
	
	do{
	printf(" Digite nota-4: ", nota4);// aqui vai a nota 1
	scanf(" %f",&nota4);
	
	if(nota4>10)  printf("Nota invalida\n");	
	}while(nota4>10);
	
	float final = (nota1 + nota2 + nota3 + nota4) / 4; // aqui onde é feito a soma das notas
	if(media=7, final>=7){		
		printf("\n Parabéns você passou \n");		
		}else if(final>4 && final<=6.99){		
			printf("\nvocê ficou de Recuperação\n");	
		}else{
			printf("\n você foi Reprovado\n");
			printf("Etude mais no proximo ano\n");
		}
		
	printf("===========================================================\n");
	
	printf("          Escolha umas das opções abaixo?\n");
	
	printf("===========================================================\n");
	int op;
    printf(" Digite 1 se quiser saber sua nota!\n");
	printf(" Digite 2 se ficou de recuperação!\n");
	scanf(" %d", &op);
	// Seleção da opção
	switch(op){
		case 1:	
		printf(" Nota final: %.2f\n", final);// aqui onde apareci a nota final		
		break;
		
		case 2:			
			printf("\n Digite a nota da prova de recuperação: ", rec); // onde vai a recuperação
			scanf("%f",&rec);
				 
			float nota5 = (rec + final) / 2;// onde faz o calculo de recuperação
			
		if(nota5>=media){
			printf(" Parabéns você passou de ano \n",nota5);
		}else{
			printf(" Infelismente você vai repitir de ano. \n",nota5);
		}		
		break;
	
		default:
		printf(" opção invalida \n");
			
	}
	
	printf("===========================================================\n");
	
	return 0;
	
}

