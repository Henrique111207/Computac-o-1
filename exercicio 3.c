#include <stdio.h>
int main()
{
	char c;
	int i;
	float f;

	printf("\nDigite um caractere:");
	scanf("%c", &c );
	
	printf("\nDigite um valor inteiro:");
	scanf("%d", &i);
	
	printf("\nEntre com um numero de ponto flutuante (valor nao inteiro):");
	scanf("%f", &f);
	
	printf("os numeros apresentados foram %c, %d, %.2f", c, i, f);

	return 0;
}