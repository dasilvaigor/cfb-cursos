/*
Nome: Igor Santos da Silva
Data: 26/05/2023
Descri��o: Fa�a um algoritmo para ler: a descri��o do produto (nome), a quantidade adquirida e o pre�o unit�rio. Calcular e escrever o total, o desconto e o total a pagar,
sabendo-se que: Se quantidade <= 5 o desconto ser� de 2%. Se quantidade > 5 e quantidade <=10 o desconto ser� de 3%. Se quantidade > 10 o desconto ser� de 5%.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	string productName;
	int amount;
	float price, fullValue, payment, discount;
	
	//User data request.
	cout << "Product's name: ";
	cin >> productName;
	cout << "Amount: ";
	cin >> amount;
	cout << "Price: U$";
	cin >> price;
	
	system("cls");
	
	//Checking the total amount.
	fullValue = amount * price;
	
	//Checking which discount to apply.
	if (amount <= 5) {
		discount = 0.2;
		payment = fullValue - (fullValue * discount);
	} else if (amount <= 10) {
		discount = 0.3;
		payment = fullValue - (fullValue * discount);
	} else {
		discount = 0.5;
		payment = fullValue - (fullValue * discount);
	}
	
	//Display of information on the screen.
	cout << "Full value: U$" << fullValue << "\n";
	cout << "Discount: " << discount << "%\n";
	cout << "Amount payable: U$" << payment << "\n";
		
	system("pause");
	return 0;
}
