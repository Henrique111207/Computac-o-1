/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int n, i;
	float v1, v2, v3, media;

	printf("Digite o numero de casos de teste:");
	scanf("%d", &n);

	for (i=0; i<n; i++) {

		printf("\n \n Digite os valores para o caso de teste:");
		scanf("%f %f %f", &v1, &v2, &v3);

		media=((v1*2)+(v2*3)+(v3*5))/10;

		printf("%1f", media);
	}
	return 0;
}