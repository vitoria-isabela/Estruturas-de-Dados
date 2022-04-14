#include <iostream>
#include "ListaCont.h"

/// <summary>
/// Implementar a opera��o void ListaCont::intercala(ListaCont *la,
//ListaCont* lb); que recebe como par�metro ponteiros v�lidos para duas listas
//la e lb de tamanho qualquer.A opera��o deve limpar a lista interna e depois
//intercalar os elementos das listas recebidas como par�metro dentro da lista interna
//(iniciando pela lista la).Se for necess�rio, a opera��o deve aumentar a capacidade
//m�xima da lista interna.Ao final, as listas la e lb devem ficar vazias.N�o se
//esque�a de levar em considera��o que as listas la e lb podem ter tamanhos
//distintos e, neste caso, os elementos da maior lista tamb�m devem ser copiados
//para o final da lista interna.
//Exemplo: Considere uma lista inicial interna com os valores[3, 4], a lista la
//com valores[6, 7, 8, 9, 10] e a lista lb com valores[0, 1, 2].Ap�s a
//execu��o da opera��o intercala(), a lista interna deve ficar com[6, 0, 7,
//1, 8, 2, 9, 10] e as listas la e lb devem estar vazias.
/// </summary>
/// <returns></returns>
int main()
{
	int n = 2;
	ListaCont lista(n);

	lista.insereFinal(3);
	lista.insereFinal(4);

	lista.imprime();

	ListaCont l1;
	ListaCont l2;

	l1.insereFinal(6);
	l1.insereFinal(7);
	l1.insereFinal(8);
	l1.insereFinal(9);
	l1.insereFinal(10);

	l2.insereFinal(0);
	l2.insereFinal(1);
	l2.insereFinal(2);

	lista.imprime();

	ListaCont* la = &l1;
	ListaCont* lb = &l2;

	lista.intercala(la, lb);

	lista.imprime();

	return 0;
}