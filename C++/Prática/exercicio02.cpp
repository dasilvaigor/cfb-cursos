/*
Nome: Igor Santos da Silva
Data: 17/05/2023
Descrição: Ler a base e a altura de um triângulo. Calcular a área. Exibir na tela a base, altura e área.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	float base, height, area;
	
	cout >> "Enter the data in centimeters";
	cout << "Enter the base of the triangle: ";
	cin >> base;
	cout << "Enter the height of the triangle: ";
	cin >> height;
	
	area = (base*height)/2;
	
	system("cls");
	
	cout << "Base: " << base << "\n";
	cout << "Height: " << height << "\n";
	cout << "Area: " << area << "cm2\n";
	
	system("pause");
	return 0;
}
