/*
Nome: Igor Santos da Silva
Data: 12/05/2023
Descri��o: Algoritmo para ler dois n�meros. Somar, subtrair, multiplicar e dividir os n�meros lidos, salvando os valores em novas variav�s. 
Imprimir no final os n�meros informados pelo usu�rio e o resultado das opera��es.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	//Solicita��o dos dados ao usu�rio.
	int numero1, numero2, soma, subtracao, multiplicacao;
	float divisao;
	
	cout << "Informe o primeiro numero: ";
	cin >> numero1;
	cout << "Informe o segundo numero: ";
	cin >> numero2;
	
	//Realiza��o das opera��es e armazenamento dos valores nas vari�veis.
	soma = numero1+numero2;
	subtracao = numero1-numero2;
	multiplicacao = numero1*numero2;
	divisao = numero1/numero2;
	
	system("cls");
	
	//Exibi��o das informa��es na tela
	cout << "Numeros digitados: " << numero1 << " e " << numero2 << "\n";
	cout << "Soma            : " << soma << "\n";
	cout << "Subtracao       : " << subtracao << "\n";
	cout << "Multiplicacao   : " << multiplicacao << "\n";
	cout << "Divisao         : " << divisao << "\n";

	system("pause");
	return 0;
}
