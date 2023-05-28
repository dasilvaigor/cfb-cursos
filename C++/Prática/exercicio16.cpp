/*
Nome: Igor Santos da Silva
Data: 26/05/2023
Descrição: Faça um programa que leia um código de operação (+,-,* ou /), e também dois valores inteiros A e B. O programa deve calcular o resultado da operação escolhida aplicado a A e B. 
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	int value1, value2;
	char operation;
	
	//User data request.
	cout << "Enter the first value: ";
	cin >> value1;
	cout << "Enter the second value: ";
	cin >> value2;
	cout << "\n[+]  [-]  [*]  [/]\n";
	cout << "Select the operation: ";
	cin >> operation;
	
	system("cls");
	
	//Checking the selected operation and displaying the result on the screen.
	if (operation == '+') {
		cout << "Selected operation: sum\n";
		cout << "Sum: " << value1 + value2 << "\n";
	} else if (operation == '-') {
		cout << "Selected operation: subtraction\n";
		cout << "Subtraction: " << value1 - value2 << "\n";
	} else if (operation == '*'){
		cout << "Selected operation: multiplication\n";
		cout << "Subtraction: " << value1 * value2 << "\n";
	} else {
		cout << "Selected operation: division\n";
		cout << "Subtraction: " << value1 / value2 << "\n";	
	}	
	
	system("pause");
	return 0;
}
