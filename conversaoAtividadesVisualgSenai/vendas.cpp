#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	
	//decla��o da vari�vel
	int quantidadeProduto;
	
	//solicita��o de dados ao usu�rio
	cout << "Quantas laranjas voce deseja comprar: ";
	cin >> quantidadeProduto;
	
	//comando para limpar a tela
	system("cls");
	
	//verifica��o das condi��es e exibi��o da informa��o na tela
	if (quantidadeProduto < 12 & quantidadeProduto > 0) {
		cout << "Quantidade: " << quantidadeProduto << "\n";
		cout << "Valor do produto: R$1.30\n";
		cout << "Valor a ser pago: R$" << quantidadeProduto*1.3 << "\n";
	} else if (quantidadeProduto >= 12){
		cout << "Quantidade: " << quantidadeProduto << "\n";
		cout << "Valor do produto: R$1.00\n";
		cout << "Valor a ser pago: R$" << quantidadeProduto*1 << "\n";
	} else {
		cout << "Quantidade invalida!\n";
	}	
	
	system("pause");
	return 0;
}
