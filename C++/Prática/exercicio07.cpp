/*
Nome: Igor Santos da Silva
Data: 25/05/2023
Descri��o: Ler o login e senha do usu�rio e caso esteja correto apresentar "BEM VINDO", caso contr�rio apresentar "USU�RIO OU SENHA INV�LIDOS".
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () { 

	string username, password, savedUsername="igor", savedPassword="1234";
	
	//User data request.
	cout << "Enter your username: ";
	cin >> username;
	cout << "Enter your password: ";
	cin >> password;
	
	system(cls);
	
	//Checking the conditions and displaying the information on the screen.
	if (username == savedUsername && password == savedPassword) {
		cout << "Welcome!\n";
	} else {
		cout << "Invalid username or password!\n";
	}

	system("pause");
	return 0;
}
