#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	
	string nomeFuncionario, matricula;
	int anosTrabalhado, idade;
	
	//Recebimentos do dados pelo usuário
	cout << "Nome do funcionario: ";
	cin >> nomeFuncionario;
	cout << "Matricula: ";
	cin >> matricula;
	cout << "Idade: ";
	cin >> idade;
	cout << "Anos trabalhados: ";
	cin >> anosTrabalhado;
	
	//comando para limpar tela
	system("cls");
	
	//exibição das informações na tela
	cout << "Funcionario: " << nomeFuncionario << "\n";
	cout << "Matricula: " << matricula << "\n\n";
	
	
	if ((idade >= 65) || (anosTrabalhado >= 30)) {
		cout << "Requerer aposentadoria!\n\n";
	} else {
		cout << "Nao requerer aposentadoria!\n\n";
	}
	
	system("pause");
	return 0;
}
