#include <iostream>

#include "ListaEncad.h"

using namespace std;

/// <summary>
/// Implementar a opera��o bool ListaEncad::inserePosicaoVal(int k,
//int val); que, dados um valor val e uma posi��o k, obt�m o valor x
//armazenado no n� da posi��o k da lista e insere val na posi��o x.Caso x indique
//uma posi��o inv�lida, ou seja, fora dos limites da lista, deve - se retornar false.
//Caso contr�rio, deve - se proceder � inser��o de val na posi��o x e retornar true.
//Exemplo: Considere uma lista com os valores[3, 2, 5, 7, 9, 2, 4, 8].Se
//k for igual a 3, o n� na posi��o k ser� o n� cujo valor � 7. Logo, x � igual a 7.
//Tratando x como uma posi��o da lista, o valor val deve ser inserido na posi��o 7,
//que � onde se encontra o valor 8. Assim, assumindo que val � igual a 1, a lista final
//ficar� da seguinte forma : [3, 2, 5, 7, 9, 2, 4, 1, 8] .
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
    lista.insereFinal(2);
    lista.insereFinal(4);
    lista.insereFinal(8);
    
    cout << "Foi possivel inserir o valor da posicao k na nova posicao? " << lista.inserePosicaoVal(3, 1); //retorno '1': true; retorno '0': false
    cout << endl;

    return 0;
}