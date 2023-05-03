#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	float base, altura, area;
	
	cout << "Calculo de Area de um triangulo\n\n";
	cout << "Informe os dados em centimetros\n";
	
	//recebimento dos dados
	cout << "Base: ";
	cin >> base;
	cout << "Altura: ";
	cin >> altura;
	
	//comando para limpar a tela
	system("cls");
	
	//calculo da area do triangulo
	area = (base*altura)/2;
	
	//exibição das informações na tela
	cout << "Base    : " << base << " cm\n";
	cout << "Altura  : " << altura << " cm\n\n";
	cout << "Ara     : " << area << " cm2\n\n";
	
	system("pause");
	return 0;
}
