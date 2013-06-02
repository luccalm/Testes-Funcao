#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

/* Determina se dado número é primo, caso seja primo mostra o primo anterior e o posterior. */

int main(){
	int a, resultado;
	int proxPrimo, antePrimo;

	printf("Digite um valor para A:");
	scanf("%d", &a);

	resultado = funcEhPrimo(a);

	if(resultado) 
	{
		proxPrimo = funcProxPrimo(a);
		antePrimo = funcAntePrimo(a); 
		printf("O próximo primo é: %d", proxPrimo);
		printf("O primo anterior é: %d", antePrimo);
	}

	printf("O número %d não é primo.", a);

	return 0;
	}

int funcProxPrimo(a) 
{ 
int i, j, divisivel = 0;

	for(i = a + 1; ; i++ )
	{	
	divisivel = 0;		
		for(j = 1; j < i; j++)
		{
			if(i % j == 0)
			{
			divisivel++;	
			}
		}
	if(divisivel < 2)
	{
	return i;	
	}
	
	}

}

int funcAntePrimo(a) 
{ 

int i, j, divisivel;
	
	for(i = a -1; ; i-- )
	{
	divisivel = 0;	
		for(j = 1; j < i; j++)
		{
			if(i % j == 0)
			{
			divisivel++;	
			}
		}
	if(divisivel < 2)
	{
	return i;	
	}
	
	}

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
