/*
 * pilha.h
 * Header de definição da ED Pilha.
 * Author: Thiago Leite
 */

#pragma once

typedef struct elemento {
	char valor;
	struct elemento *proximo;
} Elemento;

typedef struct pilha {
	Elemento *topo;
	int tamanho;
} Pilha;

Pilha* iniciar();
void exibir(Pilha *p);
int empty(Pilha *p);
int size(Pilha *p);
void push(Pilha *p, char valor);
char pop(Pilha *p);
char top(Pilha *p);
