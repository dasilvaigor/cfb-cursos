#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	
	string usuarioCadastrado = "igorsilva", senhaCadastrada = "123456";
	string usuario, senha;
	
	cout << "Informe o usuario: ";
	cin >> usuario;
	cout << "Informe a senha: ";
	cin >> senha;
	
	
	system ("cls");
	
	if (usuario == usuarioCadastrado & senha == senhaCadastrada) {
		cout << "Bem vindo Igor!\n";
	} else {
		cout << "Usuario ou senha incorretos!\n";
	}	
	
	system("pause");
	return 0;
}
