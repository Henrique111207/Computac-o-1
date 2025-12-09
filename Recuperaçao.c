#include <stdio.h>
#include <string.h>

#define QTD 100
#define TAM 100

float calculaMedia(char vet[][TAM], int tamanho) {
	int soma = 0;

	for (int i = 0; i < tamanho; i++) {
		soma += strlen(vet[i]);
	}

	return (float)soma / tamanho;
}

int main() {
	char frases[QTD][TAM];

	FILE *arquivo;


	arquivo = fopen("frases.txt", "w");
	if (arquivo == NULL) {
		printf("Erro ao criar o arquivo.\n");
		return 1;
	}

	printf("Digite 100 frases (mC!x. 100 caracteres cada):\n");

	getchar();

	for (int i = 0; i < QTD; i++) {
		printf("Frase %d: ", i + 1);
		fgets(frases[i], TAM, stdin);


		frases[i][strcspn(frases[i], "\n")] = '\0';

		fprintf(arquivo, "%s\n", frases[i]);
	}

	fclose(arquivo);


	arquivo = fopen("frases.txt", "r");
	if (arquivo == NULL) {
		printf("Erro ao abrir o arquivo para leitura.\n");
		return 1;
	}

	char frasesLidas[QTD][TAM];
	for (int i = 0; i < QTD; i++) {
		fgets(frasesLidas[i], TAM, arquivo);
		frasesLidas[i][strcspn(frasesLidas[i], "\n")] = '\0';
	}

	fclose(arquivo);


	float media = calculaMedia(frasesLidas, QTD);


	printf("\n STRINGS LIDAS DO ARQUIVO \n");
	for (int i = 0; i < QTD; i++) {
		printf("%d: %s\n", i + 1, frasesLidas[i]);
	}

	printf("\nMC)dia de caracteres das strings: %.2f\n", media);

	return 0;
}
