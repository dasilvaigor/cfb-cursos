#include <iostream>
using namespace std;

int n1, n2; //Vari�veis Globais

int main (){
	
	//Operadores Matem�ticos: + - / * %

	int n3, n4;	//Vari�veis Locais
	int res1, res2;
	
	n1=11;
	n2=3;
	n3=5;
	n4=2;
	
	res1 = n1/n2; //resultado da divis�o
	res2 = n1%n2; //resto da divis�o
	
	cout << "Divis :" << res1 << "\n";
	cout << "Resto :" << res2 << "\n";
		
	system("pause");
	return 0;
}
