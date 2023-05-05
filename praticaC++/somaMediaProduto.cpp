#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	
	int numero1, numero2, soma, produto, maiorNumero, menorNumero;
	float media;
	
	//solicitação do 1º número ao usuário
	cout << "Informe o primeiro numero: ";
	cin >> (numero1);
		
	//solicitação do 2º número ao usuário
	cout << "Informe o segundo numero: ";
	cin >> (numero2);
	
	//comando para limpar a tela
	system("cls");
	
	//processamento dos numeros informados
	soma = numero1 + numero2;
	produto = numero1 * numero2;
	media = (numero1 + numero2) / 2;
	
	//verificação das condições para armazenamento nas variaveis
	if(numero1 < numero2){
		maiorNumero = numero2;
		menorNumero = numero1;
	} else {
		maiorNumero = numero1;
		menorNumero = numero2;
	}
	
	//exibição das informações
	cout << "Primeiro numero digitado: " << numero1 << "\n";
	cout << "Segundo numero digitado: " << numero2 << "\n\n";
	cout << "Soma     : " << soma << "\n";
	cout << "Produto  : " << produto << "\n";
	cout << "Media    : " << media << "\n\n";
	
	//verificação se os números são iguais
	if(maiorNumero == menorNumero){
		cout << "Os numeros digitados sao iguais!";
	} else {
		cout << "Maior numero: " << maiorNumero << "\n";
		cout << "Menor numero: " << menorNumero << "\n";
	}
		
	system("pause");
	return 0;
}
