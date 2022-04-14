#include <iostream>
#include "ListaCircular.h"
using namespace std;

/// <summary>
/// Implementar a opera��o para inserir um novo n� com valor val antes do n� apontado por p
//em uma lista circular(duplamente encadeada com descritor).Prot�tipo:
//
//NoDuplo * ListaCircular::insereNoAntes(NoDuplo* p, int val)
//Caso a lista esteja vazia, inserir o novo n� com valor val como primeiro n� da lista(nesse
//    caso, n�o importa o valor de p).Retornar o ponteiro do novo n� inserido na lista.
//    Exemplo : O n� �azul� foi inserido antes do n� p em uma lista circular n�o vazia(ver figura).
//    O endere�o do novo n� deve ser retornado.
/// </summary>
/// <returns></returns>
int main()
{
    ListaCircular lista;

    for (int i = 1; i <= 10; i++)
        lista.insereFinal(i);

    lista.imprime();
    return 0;
}