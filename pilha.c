/*
 * main.c
 * Classe de implemantação da ED Pilha.
 * Author: Thiago Leite
 */

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* iniciar() {

	Pilha *p = malloc(sizeof(Pilha));
	p->topo = NULL;
	p->tamanho = 0;

	return p;
}

void push(Pilha *p, char caractere) {

	Elemento *e = malloc(sizeof(Elemento));
	e->valor = caractere;
	e->proximo = p->topo;
	p->topo = e;

	p->tamanho = p->tamanho + 1;
}

void exibir(Pilha *p) {
	if (empty(p)) {

		printf("Pilha vazia!\n");
		return;
	}

	Elemento *e;
	e = p->topo;
	printf("Pilha:\n");

	while (e != NULL) {

		printf(" %c\n", e->valor);
		e = e->proximo;
	}

	printf("\n\n");
}

int empty(Pilha *p) {
	return p->tamanho == 0;
}

int size(Pilha *p) {
	return p->tamanho;
}

char top(Pilha *p) {

	if (empty(p)) {

		printf("Pilha vazia!\n");
		return '\0';
	}

	return p->topo->valor;
}

char pop(Pilha *p) {

	Elemento *e;
	char c;

	if (!empty(p)) {

		e = p->topo;
		c = e->valor;
		p->topo = p->topo->proximo;

		p->tamanho = p->tamanho - 1;

		free(e);

		return c;
	} else {

		printf("Pilha vazia.\n");
		return '\0';
	}

}
