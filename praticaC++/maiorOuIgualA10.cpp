#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	
	int numero;
	
	//solicita��o de dados ao usu�rio
	cout << "Informe um numero: ";
	cin >> numero;
	
	system ("cls");
	
	//exibi��o do n�mero digitado
	cout << "Numero digitado: " << numero << "\n";
	
	//verifica se o numero e maior que 10 e apresenta a informa��o na tela
	if (numero > 10) {
		cout << "O numero digitado e maior que 10\n\n";
	} else if (numero < 10){
		cout << "O numero digitado e menor que 10\n\n";
	} else {
		cout << "Foi digitado o numero 10\n\n";
	}
	
	system("pause");
	return 0;
}
