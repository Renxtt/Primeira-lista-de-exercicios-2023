#include <stdio.h>
#include <math.h>

//Escreva um programa que leia o nome, o salário e o ano de nascimento de uma pessoa e exiba essas informações na tela.
int main(void){
	/*ler o nome da pessoa*/
	
	char nome[40], nacs[40], salar[40];
	
	
	printf("digite seu Nome:");
	scanf("%s", &nome);
	
	/*o salario dela*/
	
	printf("digite o seu salario:");
	scanf("%s", &salar);

	
	/*e o ano de nacimento*/
	printf("Digiti sua data de nascimento:");
	scanf("%s", &nacs);
	
	
	/*exiba essas informações na tela*/
	printf("\nNome:%s\nData de nascimento:%s\nSalario:%s", nome, nacs, salar);


}
