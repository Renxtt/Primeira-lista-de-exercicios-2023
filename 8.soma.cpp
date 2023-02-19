#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(void){
	
	int nub, nub2, plus, ves;
	
	printf("Ola eu sou o programa e gostaria que voce inserisse dois numeor INTEIROS");
	printf("\n\n\nPor Favor Inssira o PRIMEIRO numero INTEIRO:");
	scanf("%d", &nub);
	
	
	printf("\n\nPor Favor Inssira o SEGUNDO numero INTEIRO:");
	scanf("%d", &nub2);
	
	plus=nub+nub2;
	ves=nub*nub2;
	
	printf("\no primeiro numero escolhido foi %d, o segundo escolhido foi %d", nub, nub2);
	printf("\na soma dos dois numeros escolhidos teve o resultade de %d e a multiplicacão dos numeros escolhidos foi %d", plus, ves);
	
	return 0;
}
