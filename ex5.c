#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Dado um número A inteiro positivo imprime todos os fatoriais até N = 1. */

int main(){
	int a, fatorial, i;

	printf("Digite um valor para A:");
	scanf("%d", &a);

	while(a > 0)
	{
	fatorial = funcEhPrimo(a);
	printf("Fatorial de %d: %d.\n", a, fatorial);
	a--;
	}

return 0;
}

int funcEhPrimo(int a)
	{
	int fatorial = 1, i;
	
	for(i = 1; i <= a; i++)
		{
		fatorial = fatorial * i;	
		}

	return fatorial;
	}
