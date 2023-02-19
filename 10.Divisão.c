#include <stdio.h>
#include <math.h>
//Escreva um programa que leia dois números inteiros e exiba o resultado da divisão inteira desses números.
main(void){
	/*leia dois numeros inteiros diferentes*/
	int num, numb, result;
	
	printf("escolha um numero inteiro!");
	scanf("%d", &num);
	printf("escolha outro numero inteiro!");
	scanf("%d", &numb);
	
	
	/*exibir a divisão inteira desses numeros */
	result=(num/numb);
	printf("esse é o resultado da sua divisão:%d", result);
	
	return 0;
	
}
