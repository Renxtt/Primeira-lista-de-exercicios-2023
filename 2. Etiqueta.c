#include <stdio.h>
//Elabore um programa que pede seu nome, endereço, CEP e telefone. Ele deve imprirmir seu nome completo na primeira linha, seu endereço na segunda, e o CEP e telefone na terceira.
int main(void){
	char nome[40], ender[40], cep[40], tel[40];
	
	
	printf("Qual o seu Nome?:	");
	scanf("%s", &nome);
	printf("Qual o seu endereco?:	");
	scanf("%s", &ender);
	printf("Qual o seu CEP?:	");
	scanf("%s", cep);
	printf("Qual o seu Telefone?:	");
	scanf("%s", &tel);
	
	printf("\nSeu Nome:%s", &nome);
	printf("\nSeu Endereco:%s", &ender);
	printf("\nSeu CEP:%s", &cep);
	printf("\nO Seu Telefone:%s", &tel);	
	return 0;

}
