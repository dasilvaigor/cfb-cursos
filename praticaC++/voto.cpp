#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	
	//declara��o de variav�is
	string nome;
	int idade=0;
	
	//solicita��o de dados ao usu�rio
	cout << "Informe o seu nome: ";
	cin >> nome;
	cout << "Informe sua idade: ";
	cin >> idade;
	
	//comando para limpar a tela
	system("cls");
	
	//verifica��o das condi��es para exibi��o da informa��o na tela
	if (idade >= 18 & idade <= 65) {
		cout << "Seu voto e obrigatorio!\n\n";
	} else {
		cout << "Seu voto nao e obrigatorio!\n\n";
	}
	
	system("pause");
	return 0;
}
