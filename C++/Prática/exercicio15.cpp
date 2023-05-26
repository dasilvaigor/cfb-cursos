/*
Nome: Igor Santos da Silva
Data: 26/05/2023
Descrição: Uma fruteira está vendendo frutas: Morango R$2.50(KG até 5 KG) ou R$2.20(acima de 5 KG) - Maçã R$1.80(KG até 5 KG) ou R$1.50(acima de 5 KG).
Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00, receberá ainda um desconto de 10%.
Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	float apples, strawberry, valueStrawberry, valueApples, amount, totalPayable, totalWeight;
	
	//User data request.
	cout << "Enter the amount of strawberries (Kg): ";
	cin >> strawberry;	
	//Checking the quantity for assigning the value.
	if (strawberry <= 5) {
		valueStrawberry = strawberry * 2.5;			
	} else {
		valueStrawberry = strawberry * 2.2;	
	}
	
	//User data request.
	cout << "Enter the amount of apples (Kg): ";
	cin >> apples;	
	//Checking the quantity for assigning the value.
	if (apples <= 5) {
		valueApples = apples * 1.8;			
	} else {
		valueApples = apples * 1.5;	
	}
		
	system("cls");
	
	//Checking total weight and total amount.
	totalWeight = apples + strawberry;
	amount = valueApples + valueStrawberry;
	
	//Checking value and weight for discount.
	if (amount > 25 || (totalWeight > 8)) {
		totalPayable = amount - (amount * 0.10);
	} else {
		totalPayable = amount;
	}
	
	//Displaying the information on the screen.
	cout << "Strawberry: " << strawberry << "Kg\n";
	cout << "Apple: " << apples << "Kg\n";
	cout << "Total weight: " << totalWeight << "Kg\n";
	cout << "Amount: U$" << amount << "\n";
	cout << "Total payable: R$" << totalPayable << "\n";
		
	system("pause");
	return 0;
}
