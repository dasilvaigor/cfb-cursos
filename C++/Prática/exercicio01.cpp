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
	int number1, number2, sum, subtraction, multiplication;
	float division;
	
	cout << "Enter the first number  : ";
	cin >> number1;
	cout << "Enter the second number : ";
	cin >> number2;
	
	//Realiza��o das opera��es e armazenamento dos valores nas vari�veis.
	sum = number1+number2;
	subtraction = number1-number2;
	multiplication = number1*number2;
	division = number1/number2;
	
	system("cls");
	
	//Exibi��o das informa��es na tela
	cout << "Typed numbers: " << number1 << " and " << number2 << "\n\n";
	cout << "Sum              : " << sum << "\n";
	cout << "Subtraction      : " << subtraction << "\n";
	cout << "Multiplication   : " << multiplication << "\n";
	cout << "Division         : " << division << "\n";

	system("pause");
	return 0;
}
