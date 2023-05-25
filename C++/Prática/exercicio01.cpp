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
	
	int number1, number2, sum, subtraction, multiplication;
	float division;
	
	//User data request.
	cout << "Enter the first number  : ";
	cin >> number1;
	cout << "Enter the second number : ";
	cin >> number2;
	
	//Performing operations and storing values in variables.
	sum = number1+number2;
	subtraction = number1-number2;
	multiplication = number1*number2;
	division = number1/number2;
	
	system("cls");
	
	//Display of information on the screen.
	cout << "Typed numbers: " << number1 << " and " << number2 << "\n\n";
	cout << "Sum              : " << sum << "\n";
	cout << "Subtraction      : " << subtraction << "\n";
	cout << "Multiplication   : " << multiplication << "\n";
	cout << "Division         : " << division << "\n";

	system("pause");
	return 0;
}
