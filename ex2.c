#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Realiza o fatorial de determinado número. */

int main(){
	int a, resultado;

	printf("Digite um valor para A:");
	scanf("%d", &a);

	resultado = funcPermutacao(a);

	printf("A permutação do número %d é :%d\n", a, resultado);

	return 0;
	}

int funcPermutacao(int a)
	{
	int somar = 1, i;

	for(i = 1; i <= a; i++)
	{
		somar = somar * i;	
	}

	return somar;	
	}
