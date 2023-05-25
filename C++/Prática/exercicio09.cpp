/*
Nome: Igor Santos da Silva
Data: 25/05/2023
Descrição: Ler 3 números e exibir na tela o 3 números digitados, qual o maior número e o meno.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	int number1, number2, number3, higherNumber, smallerNumber;
	
	//User data request.
	cout << "Enter the first number: ";
	cin >> number1;
	cout << "Enter the second number: ";
	cin >> number2;
	cout << "Enter the third number: ";
	cin >> number3;
	
	system("cls");
	
	//Checking variables for greater number.
	if (number1 >= number2 && number1 >= number3) {
		higherNumber = number1;	
	} else if (number2 >= number3 && number2 >= number1) {
		higherNumber = number2;		
	} else {
		higherNumber = number3;
	}
	
	//Checking variables for lowest number.
	if (number1 <= number2 && number1 <= number3) {
		smallerNumber = number1;	
	} else if (number2 <= number3 && number2 <= number1) {
		smallerNumber = number2;		
	} else {
		smallerNumber = number3;
	}
	
	//Displaying the information on the screen.
	cout << "First number: " << number1 << "\n";
	cout << "Second number: " << number2 << "\n";
	cout << "Third number: " << number3 << "\n\n";
	cout << "Higher number: " << higherNumber << "\n";
	cout << "Smaller number: " << smallerNumber << "\n";
	
	system("pause");
	return 0;
}
