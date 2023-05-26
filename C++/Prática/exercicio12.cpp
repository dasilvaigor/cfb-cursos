/*
Nome: Igor Santos da Silva
Data: 26/05/2023
Descrição: Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que C, caso contrário, imprima que a A + B é maior que C. 
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	int valueA, valueB, valueC, sumAB;
	
	//User data request.
	cout << "Enter the value of A: ";
	cin >> valueA;
	cout << "Enter the value of B: ";
	cin >> valueB;
	cout << "Enter the value of C: ";
	cin >> valueC;
	
	system ("cls");
	
	sumAB = valueA + valueB;
	
	//Checking the conditions and displaying the information on the screen.
	if (sumAB < valueC) {
		cout << "The sum of A + B is less than the value of C.\n";		
	} else if (sumAB > 10){
		cout << "The sum of A + B is greater than the value of C.\n";
	} else {
		cout << "The sum of A + B equals the value of C.\n";
	}
	
	system("pause");
	return 0;
}
