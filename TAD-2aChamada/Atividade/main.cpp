#include <iostream>

#include "Atividade.h"

using namespace std;

/// <summary>
/// Defina e desenvolva o TAD Atividade, que deve possuir os seguintes atributos:
//int totalQuestoes(n�mero inteiro positivo indicando o total de quest�es de uma atividade);
//float valorQuestao(valor de cada quest�o);
//float* notas(vetor contendo as notas obtidas em cada quest�o);
//Al�m disso, o TAD Atividade deve oferecer as seguintes opera��es :
//Construtor, que recebe o total de quest�es como par�metro, aloca o vetor e inicializa os demais atributos(assuma que todas as quest�es possuem o mesmo valor e que o valor total da atividade � 100);
//Destrutor;
//Opera��o void leNotas(); que solicita ao usu�rio que digite a nota de cada quest�o(notas fora do intervalo v�lido devem ser lidas novamente);
//Opera��o void imprimeRelatorio(); calcula e imprime a nota total, al�m de imprimir mensagens indicando em quais quest�es as notas ficaram abaixo de 60 % .
/// </summary>
/// <returns></returns>
int main()
{
	Atividade a(5);
	a.leNotas();
	a.imprimeRelatorio();
	return 0;
}