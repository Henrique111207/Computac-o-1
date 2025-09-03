/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()  {

	int n, p, t=0;

	srand(time(NULL));

	n=rand() % 500+1;

	do {
		printf("tente adivinhar o numero secreto entre 1 e 500. \n");
		scanf("%d", &p);
		t++;

		if (p>n) {
			printf("O numero secreto e menor.\n");

		} else if(p<n) {
			printf("o numero secreto e maior.\n");
		} else {
			printf("Voce acertou o numero secreto %d em %d tentatvas!\n", n, t);
		}
	} while (p!=n);

	if (t<=3) {
		printf("Voce foi excelente\n");
	} else if (t>=4 && t<=6) {
		printf("voce foi muito bom");
	} else if (t>=7 && t<=10) {
		printf("voce foi bom\n");
	} else {
		printf("voce foi ruim\n");
	}



	return 0;
}