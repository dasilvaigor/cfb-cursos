/*
Nome: Igor Santos da Silva
Data: 23/05/2023
Descrição: Ler dois números inteiros e escrever na tela: A média, soma, produto, o menor e o maior valor.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	int number1, number2, sum, product, higherNumber, smallerNumber;
	float average;
	
	//User data request.
	cout << "Enter the first number: ";
	cin >> number1;
	cout << "Enter the second number: ";
	cin >> number2;
	
	//Performing operations and storing values in variables.
	average = (number1 + number2) / 2;
	sum = number1 + number2;
	product = number1 * number2;
	
	//Checking the condition.
	if (number1 > number2) {
		higherNumber = number1;
		smallerNumber = number2;
	} else {
		higherNumber = number2;
		smallerNumber = number1;
	}
		
	system("cls");
	
	//Display of information on the screen.
	cout << "First number: " << number1 << "\n";
	cout << "Seconde number: " << number2 << "\n\n";
	cout << "Average: " << average << "\n";	
	cout << "Sum: " << sum << "\n";		
	cout << "Product: " << product << "\n\n";		
	cout << "Higher number: " << higherNumber << "\n";		
	cout << "Smaller number: " << smallerNumber << "\n";		
		
	system("pause");
	return 0;
}
