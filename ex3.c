#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

/* Determina se dado número é primo. */

int main(){
	int a, resultado;

	printf("Digite um valor para A:");
	scanf("%d", &a);

	resultado = funcEhPrimo(a);

	if(resultado) 
	{
		printf("O número %d é primo.\n", a);
		return 0; 
	}

	printf("O número %d não é primo.\n", a);


	return 0;
	}

int funcEhPrimo(int a)
	{
	int somar = 1, i, divisivel = 0;

	for(i = 1; i < a && divisivel < 2; i++)
	{
	if(a % i == 0)
		{
		divisivel++;	
		}	
	}

	if(divisivel == 1)
	{
	return TRUE;
	}
	return FALSE;
	

	}
