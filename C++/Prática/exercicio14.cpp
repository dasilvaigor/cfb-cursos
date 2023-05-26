/*
Nome: Igor Santos da Silva
Data: 26/05/2023
Descri��o: Fa�a um algoritmo que leia dois valores inteiros A e B, se os valores forem iguais dever� se somar os dois, caso contr�rio multiplique A por B. 
Ao final de qualquer um dos c�lculos deve-se atribuir o resultado para uma vari�vel C e mostrar seu conte�do na tela.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	int valueA, valueB, sumAB, multiplicationAB;
	
	//User data request.
	cout << "Enter the value of A: ";
	cin >> valueA;
	cout << "Enter the value of B: ";
	cin >> valueB;
	
	system("cls");
	
	//Checking the conditions.
	if (valueA == valueB) {
		sumAB = valueA + valueB;
	} else {
		multiplicationAB = valueA * valueB;
	}
	
	//Checking the conditions and displaying the information on the screen.	
	cout << "Value A: " << valueA << "\n";
	cout << "Value B: " << valueB << "\n\n";
	if (valueA == valueB) {
		cout << "Sum (A + B): " << sumAB << "\n";
	} else {
		cout << "Multiplication (A * B): " << multiplicationAB << "\n";
	}
	
	system("pause");
	return 0;
}
