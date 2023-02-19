#include <stdio.h>
#include <math.h>
//6. Escreva um programa que leia o preço de um produto e a quantidade comprada e exiba o valor total da compra.
int main(void){
	/*ler preço*/
	float pre, quant, resu;
	
	char pro[40];
	
	printf("qual foi o produto que vc comprou?:");
	scanf("%s", &pro);
	
	/*ler o produto*/
	printf("qual o preço do produto que vc comprou?:");
	scanf("%f", &quant);
	
	/*ler quantidade de produtos comprados*/
	printf("Qual a quantidade de %s que vc comprou?:", pro);
	scanf("%f", &quant);
	
	/*exibir valir total da compra*/
	resu=quant*pre;
	
	printf("\nVoce comprou:%s\ncada unidade custa:%f\nVoce comprou %f unidades de %s\nsendo assim voce gastou %f nessa compra", pro, pre, quant, pro, resu);
	
	return 0;
	
	
	
}
