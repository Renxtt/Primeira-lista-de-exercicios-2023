#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char nome_aluno[40], nome_aluno2[40], nome_aluno3[40], nome_aluno4[40], nome_aluno5[40];
	float nnota, nnota2, nnota3, nnota4, nnota5;
	char str[20];
	
	
		
	printf("\n\n\n\nqual o nome do Primeiro Aluno:");
	scanf("%s", &nome_aluno);
	printf("qual o nome do segundo aluno:");
	scanf("%s", &nome_aluno2);
	printf("qual o nome do terceiro aluno:");
	scanf("%s", &nome_aluno3);
	printf("qual o nome do quarto aluno:");
	scanf("%s", &nome_aluno4);
	printf("qual o nome do quinto aluno:");
	scanf("%s", &nome_aluno5);
	
	printf("\naulno1: %s", &nome_aluno);
	printf("\naluno2: %s", &nome_aluno2);
	printf("\naluno3: %s", &nome_aluno3);
	printf("\naluno4: %s", &nome_aluno4);
	printf("\naluno5: %s", &nome_aluno5);
	
	
	printf("\nqual a nota do  aluno %s:", &nome_aluno);
	scanf("%f", &nnota);
	printf("qual a nota do aluno %s:", &nome_aluno2);
	scanf("%f", &nnota2);
	printf("qual a nota do aluno %s:", &nome_aluno3);
	scanf("%f", &nnota3);
	printf("qual a nota do aluno %s:", &nome_aluno4);
	scanf("%f", &nnota4);
	printf("qual a nota do aluno %s:", &nome_aluno5);
	scanf("%f", &nnota5);
	
	
	
	printf("%20s", "ALUNO(A)");
	printf("%33s", "Nota\n");
	printf("%55s", "===========================================");
	printf("\n%20s", nome_aluno);
	printf("%35f", nnota);
	printf("\n%20s",nome_aluno2);
	printf("%35f", nnota2);
	printf("\n%20s",nome_aluno3);
	printf("%35f", nnota3);	
	printf("\n%20s",nome_aluno4);
	printf("%35f", nnota4);	
	printf("\n%20s",nome_aluno5);
	printf("%35f", nnota5);	
		
		
		
}
