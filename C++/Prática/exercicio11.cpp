/*
Nome: Igor Santos da Silva
Data: 25/05/2023
Descrição: ler a quantidade de maçãs compradas e exibir o valor total da compra com base na quantidade. Se a quantidade for menor que 12, cada maçã custará R$1,30.
Se maior ou igual a 12, cada maçã custará R$1,00.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	int apples;
	
	cout << "Enter the number of apples you want: ";
	cin >> apples;
	
	system("cls");
	
	cout << "Amount of apples: " << apples << "\n";
	if (apples < 12) {
		cout << "Value: U$1.30\n";
		cout << "Amount: U$" << apples*1.30 << "\n";
	} else {
		cout << "Value: U$1.00\n";
		cout << "Amount: U$" << apples*1.00 << "\n";	
	}
	
	system("pause");
	return 0;
}
