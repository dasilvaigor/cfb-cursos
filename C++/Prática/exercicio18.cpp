/*
Nome: Igor Santos da Silva
Data: 26/05/2023
Descrição: Faça um algoritmo para ler: a descrição do produto (nome), a quantidade adquirida e o preço unitário. Calcular e escrever o total, o desconto e o total a pagar,
sabendo-se que: Se quantidade <= 5 o desconto será de 2%. Se quantidade > 5 e quantidade <=10 o desconto será de 3%. Se quantidade > 10 o desconto será de 5%.
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
