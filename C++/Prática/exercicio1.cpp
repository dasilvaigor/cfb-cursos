/*
Nome: Igor Santos da Silva
Data: 12/05/2023
Descrição: Algoritmo para ler dois números. Somar, subtrair, multiplicar e dividir os números lidos, salvando os valores em novas variavés. 
Imprimir no final os números informados pelo usuário e o resultado das operações.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	//Solicitação dos dados ao usuário.
	int numero1, numero2, soma, subtracao, multiplicacao;
	float divisao;
	
	cout << "Informe o primeiro numero: ";
	cin >> numero1;
	cout << "Informe o segundo numero: ";
	cin >> numero2;
	
	//Realização das operações e armazenamento dos valores nas variáveis.
	soma = numero1+numero2;
	subtracao = numero1-numero2;
	multiplicacao = numero1*numero2;
	divisao = numero1/numero2;
	
	system("cls");
	
	//Exibição das informações na tela
	cout << "Numeros digitados: " << numero1 << " e " << numero2 << "\n";
	cout << "Soma            : " << soma << "\n";
	cout << "Subtracao       : " << subtracao << "\n";
	cout << "Multiplicacao   : " << multiplicacao << "\n";
	cout << "Divisao         : " << divisao << "\n";

	system("pause");
	return 0;
}
