#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	
	int numero1, numero2, soma, produto, maiorNumero, menorNumero;
	float media;
	
	//solicita��o do 1� n�mero ao usu�rio
	cout << "Informe o primeiro numero: ";
	cin >> (numero1);
		
	//solicita��o do 2� n�mero ao usu�rio
	cout << "Informe o segundo numero: ";
	cin >> (numero2);
	
	//comando para limpar a tela
	system("cls");
	
	//processamento dos numeros informados
	soma = numero1 + numero2;
	produto = numero1 * numero2;
	media = (numero1 + numero2) / 2;
	
	//verifica��o das condi��es para armazenamento nas variaveis
	if(numero1 < numero2){
		maiorNumero = numero2;
		menorNumero = numero1;
	} else {
		maiorNumero = numero1;
		menorNumero = numero2;
	}
	
	//exibi��o das informa��es
	cout << "Primeiro numero digitado: " << numero1 << "\n";
	cout << "Segundo numero digitado: " << numero2 << "\n\n";
	cout << "Soma     : " << soma << "\n";
	cout << "Produto  : " << produto << "\n";
	cout << "Media    : " << media << "\n\n";
	
	//verifica��o se os n�meros s�o iguais
	if(maiorNumero == menorNumero){
		cout << "Os numeros digitados sao iguais!";
	} else {
		cout << "Maior numero: " << maiorNumero << "\n";
		cout << "Menor numero: " << menorNumero << "\n";
	}
		
	system("pause");
	return 0;
}
