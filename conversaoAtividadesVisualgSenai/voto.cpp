#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	
	//declaração de variavéis
	string nome;
	int idade=0;
	
	//solicitação de dados ao usuário
	cout << "Informe o seu nome: ";
	cin >> nome;
	cout << "Informe sua idade: ";
	cin >> idade;
	
	//comando para limpar a tela
	system("cls");
	
	//verificação das condições para exibição da informação na tela
	if (idade >= 18 & idade <= 65) {
		cout << "Seu voto e obrigatorio!\n\n";
	} else {
		cout << "Seu voto nao e obrigatorio!\n\n";
	}
	
	system("pause");
	return 0;
}
