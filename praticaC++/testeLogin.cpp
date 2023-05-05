#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	
	//declaração das variavéis
	string usuarioCadastrado = "igorsilva", senhaCadastrada = "123456";
	string usuario, senha;
	
	//solicitação dos dados ao usuário
	cout << "Informe o usuario: ";
	cin >> usuario;
	cout << "Informe a senha: ";
	cin >> senha;
	
	//comando para limpar a tela
	system ("cls");
	
	//verificação das condições e exibição da informação na tela
	if (usuario == usuarioCadastrado & senha == senhaCadastrada) {
		cout << "Bem vindo Igor!\n";
	} else {
		cout << "Usuario ou senha incorretos!\n";
	}	
	
	system("pause");
	return 0;
}
