#include <stdio.h>
#include <stdlib.h>
#include <math.h.>
//Escreva um programa que leia o raio de um círculo e calcule sua área e seu perímetro.

main(void){
	
	float raio, expo, resu, result, resultt, resulttt;
	
	
	
	
	expo=2;
	
	
	
	
//	printf("Qual é o expoente:");
//	scanf("%d", &expo);
	
	printf("Qual o Raio do seu Circulo:");
	scanf("%f", &raio);
	
	
	resu=(pow(raio,expo));
	
	printf("%f", resu);
	printf("\nA area de um circulo e pi vezes o raio elevado ao quadrado!!\n");
	
	result=(3.14*resu);
	
	printf("\noque da %f metros quadrados!", result);
	
	resultt=(13.4*raio);
//	resulttt=(result*2);
	
	printf("\nja o perimetro é pi vezes 2 vezes o raio!!");
	printf("\nOque da %f", resultt);
	
	return 0;

}
