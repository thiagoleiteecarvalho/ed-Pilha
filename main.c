/*
 * main.c
 * Classe principal de execução da Pilha.
 * Author: Thiago Leite
 */

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(void) {

	Pilha *pilha = iniciar();

	if (!pilha) {

		printf("Sem memória disponivel!\n");
		exit(1);
	} else {

		int opcao;
		char valor;
		int tamanho;

		do {

			printf("\n");
			printf("PILHA\n");
			printf("Escolha a opcao\n");
			printf("0. Sair\n");
			printf("1. PUSH\n");
			printf("2. POP\n");
			printf("3. TOP\n");
			printf("4. SIZE\n");
			printf("5. Exibir pilha\n");
			printf("Digite uma opção:");
			scanf("%d", &opcao);

			switch (opcao) {
			case 0:
				exit(1);
				break;

			case 1:
				printf("Digite um valor a ser empilhado:");
				scanf(" %c", &valor);
				push(pilha, valor);
				break;

			case 2:
				valor = pop(pilha);
				if (valor)
					printf("Elemento desempilhado: %c\n\n", valor);
				break;

			case 3:
				valor = top(pilha);
				if (valor)
					printf("Topo da pilha: %c\n\n", valor);
				break;

			case 4:
				tamanho = size(pilha);
				printf("Quantidade de elementos da pilha: %d\n\n", tamanho);
				break;

			case 5:
				exibir(pilha);
				break;

			default:
				printf("Comando invalido\n\n");
				break;
			}

		} while (opcao);

		free(pilha);
		return 0;
	}
}
