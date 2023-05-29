/*
Nome: Igor Santos da Silva
Data: 26/05/2023
Descrição: Em uma loja de CD´s existem apenas quatro tipos de preços que estão associados a cores. Assim os CD ´s que ficam na loja não são marcados por preços e sim por cores. 
Desenvolva o algoritmo que a partir daentrada da cor o software mostre o preço. A loja está atualmente com a seguinte tabela de preços. 
Verde = R$ 10,00	
Azul = R$ 20,00
Amarelo = R$ 30,00	
Vermelho = R$ 40,00
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	int cor; 
	
	//User data request.
	cout << "[1]Verde - [2]Azul - [3]Amarelo - [4]Vermelho\n";
	cout << "Enter the color of the CD label: ";
	cin >> cor;
	
	//Checking the selected color and displaying the corresponding value on the screen.
	if (cor = 1) {
		cout << "Selected color: Green\n";
		cout << "CD value: U$10.00";
	} else if (cor = 2) {
		cout << "Selected color: Blue\n";
		cout << "CD value: U$20.00";	
	} else if (cor = 3) {
		cout << "Selected color: Yellow\n";
		cout << "CD value: U$30.00";
	}else {
		cout << "Selected color: Red\n";
		cout << "CD value: U$40.00";
	}
	
	system("pause");
	return 0;
}
