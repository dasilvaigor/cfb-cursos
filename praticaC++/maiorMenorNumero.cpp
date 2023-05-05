#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	
	//declaração da variáveis
	float numero1, numero2, numero3, maiorNumero, menorNumero;
	
	//solicitação de dados ao usuário
	cout << "Informe o primeiro numero: ";
	cin >> numero1;
	cout << "Informe o segundo numero: ";
	cin >> numero2;
	cout << "Informe o terceiro numero: ";
	cin >> numero3;
	
	//verificação do maior número digitado
	if (((numero1 > numero2) && (numero1 > numero3)) || ((numero1 > numero2) && (numero1 == numero3)) || ((numero1 > numero3) && (numero1 == numero2))) {
		maiorNumero = numero1;
	} else if (((numero2 > numero1) && (numero2 > numero3)) || ((numero2 > numero1) && (numero2 == numero3)) || ((numero2 > numero3) && (numero2 == numero1))) {
		maiorNumero = numero2;
	} else {
		maiorNumero = numero3;
	} 
	
	//verificação do menor número digitado
	if (((numero1 < numero2) && (numero1 < numero3)) || ((numero1 < numero2) && (numero1 == numero3)) || ((numero1 < numero3) && (numero1 == numero2))) {
		menorNumero = numero1;
	} else if (((numero2 < numero1) && (numero2 < numero3)) || ((numero2 < numero1) && (numero2 == numero3)) || ((numero2 < numero3) && (numero2 == numero1))) {
		menorNumero = numero2;
	} else {
		menorNumero = numero3;
	}
	
	//comando para limpar a tela
	system("cls");
	
	//exibição das informações na tela
	cout << "Primeiro numero: " << numero1 << "\n";
	cout << "Segundo numero: " << numero2 << "\n";
	cout << "Terceiro numero: " << numero3 << "\n\n";
	cout << "Maior numero digitado: " << maiorNumero << "\n";
	cout << "Menor numero digitado: " << menorNumero << "\n\n";
	
	system("pause");
	return 0;
}

