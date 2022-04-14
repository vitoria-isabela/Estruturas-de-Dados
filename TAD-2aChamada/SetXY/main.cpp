#include "Atividade3.h"

#include <iostream>

using namespace std;

/// <summary>
/// Defina e desenvolva o TAD Atividade3, que deve possuir os seguintes atributos:
//int n(quantidade de valores);
//int y(soma ponderada dos valores);
//int* x(valores).
//Al�m disso, o TAD Atividade3 deve oferecer as seguintes opera��es :
//Construtor, que recebe a quantidade total de valores e chama a opera��o para ler os valores de x;
//Destrutor;
//Opera��o void setX(); que deve realizar a leitura dos valores do vetores x;
//Opera��o void setY();  que deve calcular a soma ponderada dos valores de x e colocar em m.Cada posi��o tem o peso relativo a seu �ndice;
//Opera��o int getY(); que deve retornar o valor de y.No caso do valor ainda n�o ter sido calculado, chamar a opera��o que faz o c�lculo da soma ponderada.
/// </summary>
/// <returns></returns>
int main()
{
    int tam;
    cin >> tam;
    Atividade3 a(tam);
    cout << "Y: " << a.getY() << endl;
    return 0;
}