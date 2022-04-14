#include <iostream>
#include "ListaEncad.h"

using namespace std;
/// <summary>
/// A lista com descritor � semelhante a lista encad sem descritor, tendo apenas os metodos de insere e remove modificados
/// e tendo a adi��o de um contador de n�s 'n' e um ponteiro do tipo No *ultimo.
/// </summary>
/// <returns></returns>
int main()
{
    ListaEncad lista;

    lista.insereInicio(20);
    lista.insereInicio(30);
    lista.insereInicio(-10);
    lista.insereInicio(15);

    lista.imprimir();

    lista.removeInicio();

    lista.imprimir();

    lista.insereFinal(90);
    lista.insereFinal(98);
    lista.imprimir();

    lista.removeFinal();
    lista.removeFinal();
    lista.removeFinal();

    lista.imprimir();
    return 0;
}
