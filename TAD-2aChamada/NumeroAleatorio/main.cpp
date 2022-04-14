#include <iostream>

#include "NumeroAleatorio.h"

using namespace std;

/// <summary>
/// Defina o TAD NumeroAleatorio que deve possuir os seguintes atributos:
/// - int semente ( valor positivo e menor que 101, usado para iniciar o processo de
/// gera��o dos n�meros aleat�rios);
/// - int minimo( valor inteiro indicando o limite inferior do intervalo dos n�meros);
/// - int maximo (valor inteiro indicando o limite superios do intervalo dos n�meros);
/// Al�m disso o tad deve oferecer as seguintes opera��es:
/// - Construtor, que recebe por par�metro os valores correspondentes aos tr�s atributos e
/// os inicializa (considere que minimo e maximo devem ser diferentes e, caso minimo seja maior
/// que m�ximo, o m�nimo deve se tornar o m�ximo e vice-versa);
/// - Opera��o void setSemente (int s); que inicializa a semente do gerador, emitindo uma
/// mensagem de erro caso a semente seja inv�lida;
/// - Opera��o int* proximos(int n); que retorna um vetor contendo os proximos n numeros 
/// aleat�rios da sequencia (assuma que a sequencia � definida pela formula "x i+1 = 
/// (7*xi + 13) % 101", sendo xo = semente). Ap�s calcular os n n�meros, esses devem ser ajustados
/// no intervalo [minimo, maximo -1].
/// </summary>
/// <returns></returns>
int main()
{
	NumeroAleatorio gerador(31, 0, 20);
	int* numeros = gerador.proximos(10);

	cout << "Numeros gerados: ";
	for (int i = 0; i < 10; i++)
		cout << numeros[i] << " ";

	delete[] numeros;
	return 0;
}