/*
Nome: Igor Santos da Silva
Data: 26/05/2023
Descri��o: Escreva um algoritmo que leia o n�mero de litros vendidos e o tipo de combust�vel (codificado da seguinte forma: A-�lcool, G-gasolina), calcule e imprima o valor a ser pago 
pelo cliente sabendo-se que o pre�o do litro da gasolina � R$ 6,59 e o pre�o do litro do �lcool � R$ 3,79.
Tabela de desconto: �lcool - At� 25 litros, desconto de 2% por litro | Acima de 25 litros, desconto de 4% por litro
Tabela de desconto: Gasolina - At� 25 litros, desconto de 3% por litro | Acima de 25 litros, desconto de 5% por litro
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	float literSold, value;
	char fuel;
	
	//User data request.
	cout << "Liters sold: ";
	cin >> literSold;
	cout << "[A] Alcohol - [G] Gasoline\n";
	cout << "Fuel: ";
	cin >> fuel;
	
	system("cls");
	
	//Standardizing to the variable response.
	if (fuel == 'a') {
		fuel = 'A';
	} else if (fuel == 'g') {
		fuel = 'G';
	}
	
	//Checking the payment amount and after applying the discount.
	if (fuel == 'A') {
		value = literSold * 3.79;
		if (literSold <= 25) {
			value = value - (value*0.02);
		} else {
			value = value - (value*0.04);	
		}
	} else {
		value = literSold * 6.59;
		if (literSold <= 25) {
			value = value - (value*0.03);
		} else {
			value = value - (value*0.05);
		}
	}
	
	cout << "Amount payable: U$" << value << "\n\n";
	
	system("pause");
	return 0;
}
