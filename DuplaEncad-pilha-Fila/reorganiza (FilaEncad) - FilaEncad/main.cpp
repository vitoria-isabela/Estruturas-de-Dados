#include <iostream>
#include "FilaEncad.h"

using namespace std;

void inverteFila(FilaEncad* f);
FilaEncad* concatena(FilaEncad* f1, FilaEncad* f2);

/// <summary>
/// Implementar a fun��o FilaEncad* reorganiza(FilaEncad *f) que recebe uma fila f
//como par�metro, cria e retorna uma nova fila contendo somente os elementos priorit�rios da
//fila f que v�m imediatamente ap�s outro n� priorit�rio.Um n� ser� considerado como
//priorit�rio se possuir valor maior que 70. Esses elementos inseridos na nova fila devem ser
//transferidos de f, ou seja, eles n�o mais far�o parte da fila original.A fun��o deve garantir
//que a ordem original dos n�s ficar� inalterada, ou seja, todos os valores pertencentes ao
//mesmo grupo(grupo dos transferidos ou grupo dos n�o transferidos) manter�o a mesma
//ordem relativa entre si.Al�m disso, a fun��o deve percorrer a fila original uma �nica vez e
//n�o deve usar estruturas auxiliares(pilhas, filas, listas ou vetores), a menos da fila que ser�
//retornada.Assuma que n�o h� valores repetidos na fila original.
//Exemplo: se a fila original contiver a sequ�ncia :
//
//15 85 71 75 62 70 30 92 100 54
//ent�o, ap�s execu��o da fun��o, teremos o seguinte resultado :
//Fila original : 15 85 62 70 30 92 54
//Nova fila : 71 75 100
/// </summary>
/// <returns></returns>
int main()
{

	/// TESTE COM FILA

	/*FilaEncad f1, f2;
	for (int i = 0; i < 5; i++)
		f1.enfileira(i);*/

		/*cout << "Fila apos inserir 5 valores" << endl;*/
		/*f1.imprime();*/

		//for (int i = 3; i < 9; i++)
		//    f2.enfileira(i);

		//cout << "Fila apos inserir mais 5 valores" << endl;
		/*f1.imprime();
		f2.imprime();

		FilaEncad* f3 = concatena(&f1, &f2);
		f3->imprime();*/

		//inverteFila(&f);

		//cout << "Fila invertida: " << endl;
		//f.imprime();
	/*PilhaEncad p;

	for (int i = 0; i < 5; i++)
		p.empilha(i);
	int x = 2;
	removeDaPilha(&p, x);
	p.imprime();*/
	FilaEncad f;
	f.enfileira(15);
	f.enfileira(85);
	f.enfileira(71);
	f.enfileira(75);
	f.enfileira(62);
	f.enfileira(70);
	f.enfileira(30);
	f.enfileira(92);
	f.enfileira(100);
	f.enfileira(54);

	f.imprime();
	FilaEncad* f1 = f.reorganiza(&f);
	f.imprime();

	f1->imprime();

	delete f1;

	return 0;
}

//void inverteFila(FilaEncad* f)
//{
//	PilhaEncad p;
//
//	while (!f->vazia())
//		p.empilha(f->desenfileira());
//
//	while (!p.vazia())
//		f->enfileira(p.desempilha());
//}

FilaEncad* concatena(FilaEncad* f1, FilaEncad* f2)
{
	FilaEncad* newfila = new FilaEncad();

	while (!f1->vazia())
		newfila->enfileira(f1->desenfileira());

	//enfileira valores da f2, apenas se eles n�o estiverem contidos na nova fila 
	while (!f2->vazia())
	{
		int val = f2->desenfileira();
		if (!newfila->jaContido(val))
			newfila->enfileira(val);
	}
	return newfila;
}