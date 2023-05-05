#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	
	int numero;
	
	//solicitação de dados ao usuário
	cout << "Informe um numero: ";
	cin >> numero;
	
	system ("cls");
	
	//exibição do número digitado
	cout << "Numero digitado: " << numero << "\n";
	
	//verifica se o numero e maior que 10 e apresenta a informação na tela
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
