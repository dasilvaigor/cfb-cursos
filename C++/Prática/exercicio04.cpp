/*
Nome: Igor Santos da Silva
Data: 23/05/2023
Descrição: Ler um valor e escrever a mensagem "É MAIOR QUE 10!", se o valor lido for maior que 10, caso contrário apresentar "NÃO É MAIOR QUE 10!".
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	int number;
	
	//User data request.
	cout << "Enter a number: ";
	cin >> number;
	
	//Checking the condition and displaying the information on the screen.
	if (number > 10) {
		cout << "The number entered is greater than 10!\n";
	} else {
		cout << "The number entered is not greater than 10!\n";
	}
	
	system("pause");
	return 0;
}
