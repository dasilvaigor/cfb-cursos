#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	
	//declara��o das variav�is
	string usuarioCadastrado = "igorsilva", senhaCadastrada = "123456";
	string usuario, senha;
	
	//solicita��o dos dados ao usu�rio
	cout << "Informe o usuario: ";
	cin >> usuario;
	cout << "Informe a senha: ";
	cin >> senha;
	
	//comando para limpar a tela
	system ("cls");
	
	//verifica��o das condi��es e exibi��o da informa��o na tela
	if (usuario == usuarioCadastrado & senha == senhaCadastrada) {
		cout << "Bem vindo Igor!\n";
	} else {
		cout << "Usuario ou senha incorretos!\n";
	}	
	
	system("pause");
	return 0;
}
