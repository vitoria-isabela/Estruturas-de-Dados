
#include <iostream>
#include "ListaDupla.h"
using namespace std;

/// <summary>
/// Implementar a opera��o void ListaDupla::adicionaListaFinal(ListaDupla* l2); que, de acordo com
//os tamanhos das listas, adiciona todos os n�s de uma lista no final de uma outra lista
//duplamente encadeada.A lista que tiver maior n�mero de n�s deve ficar com os
//elementos no in�cio e a outra no final.Se os tamanhos forem iguais, tanto faz.Ao final
//da opera��o a lista com menor n�mero de n�s � alterada e fica vazia.A opera��o n�o
//deve percorrer as listas.
//Exemplo: Considere uma lista com os valores[3, 2, 5, 12, 7, 9] e uma
//lista l2 com os valores[6, 13, 8].Como a lista impl�cita � maior que l2, a lista
//resultante �[3, 2, 5, 12, 7, 9, 6, 13, 8] e a l2 resultante �[].
/// </summary>
/// <returns></returns>
int main()
{
    ListaDupla l, l2;

    l.insereFinal(0);
    l.insereFinal(1);
    l.insereFinal(2);
    l.insereFinal(3);
    l.insereFinal(4);

    l2.insereFinal(0);
    l2.insereFinal(1);
    l2.insereFinal(2);
    l2.insereFinal(3);
    l2.insereFinal(4);
    l2.insereFinal(5);

    cout << "l: " << endl;
    l.imprime();

    cout << "l2: " << endl;
    l2.imprime();

    l2.adicionaListaFinal(&l);

    cout << "l: " << endl;
    l.imprime();

    cout << "l2: " << endl;
    l2.imprime();
}