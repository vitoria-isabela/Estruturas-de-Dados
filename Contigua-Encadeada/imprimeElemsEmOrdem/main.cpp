#include <iostream>

#include "ListaEncad.h"

using namespace std;

/// <summary>
/// Implementar a opera��o void ListaEncad::imprimeElemsEmOrdem(); que
//imprime os elementos da lista encadeada que est�o ordenados em rela��o aos seus
//vizinhos imediatos.Em outras palavras, se P � um n� da lista, voc� deve imprimir a
//sua informa��o somente se esta for maior ou igual � informa��o contida no seu
//antecessor e menor ou igual � informa��o contida no seu sucessor.No caso dos
//elementos que est�o nas bordas da lista(primeiro e �ltimo), a ordena��o deve ser
//verificada com rela��o ao �nico vizinho existente.
//Exemplo: Considere uma lista com os valores[3, 2, 5, 7, 9].Os valores a
//serem impressos ser�o o 5 (est� entre 2 e 7), o 7 (entre 5 e 9) e o 9 (que � maior
//	que 7).
/// </summary>
/// <returns></returns>
int main()
{
    ListaEncad lista;

    lista.insereFinal(3);
    lista.insereFinal(2);
    lista.insereFinal(5);
    lista.insereFinal(7);
    lista.insereFinal(9);
   
    cout << "Lista sem a operacao imprimeElemsEmOrdem: " << endl;
    lista.imprimir();

    cout << "Lista com a operacao imprimeElemsEmOrdem: " << endl;
    lista.imprimeElemsEmOrdem();

    return 0;
}
