#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Teste 1 */

int main(){
	int a, b, resultado;

	printf("Digite um valor para A e B:");
	scanf("%d %d", &a, &b);

	resultado = funcSomar(a,b);

	printf("\nO resultado da soma de %d e %d é: %d\n", a, b, resultado);

	return 0;
	}

int funcSomar(int a, int b)
	{
	int somar;

	somar = a + b;

	return somar;	
	}
