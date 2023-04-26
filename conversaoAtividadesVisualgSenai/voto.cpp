#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	
	string nome;
	int idade=0;
	
	cout << "Informe o seu nome: ";
	cin >> nome;
	cout << "Informe sua idade: ";
	cin >> idade;
	
	system("cls");
	
	if (idade >= 18 & idade <= 65) {
		cout << "Seu voto e obrigatorio!\n\n";
	} else {
		cout << "Seu voto nao e obrigatorio!\n\n";
	}
	
	system("pause");
	return 0;
}
