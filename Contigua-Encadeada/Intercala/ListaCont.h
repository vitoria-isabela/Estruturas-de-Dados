﻿#pragma once
class ListaCont
{
private:
	int max;
	int n;
	int* vet; ///vetor suporte da lista, tamanho max.
	void realoca();
	void realocaVetor(int newMax);
public:
	ListaCont();
	ListaCont(int tam);
	~ListaCont();

	int get(int k);
	void set(int k, int val);  ///altera n� na posi��o k para val

	void removeFinal();
	void removeInicio();

	void removeK(int k);
	void insereK(int k, int val);

	void insereFinal(int val);
	void insereInicio(int val);

	void limpar();

	void imprime();
	void intercala(ListaCont *la, ListaCont *lb);
};
