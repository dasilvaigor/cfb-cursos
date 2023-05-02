#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	
	//declação da variável
	int quantidadeProduto;
	
	//solicitação de dados ao usuário
	cout << "Quantas laranjas voce deseja comprar: ";
	cin >> quantidadeProduto;
	
	//comando para limpar a tela
	system("cls");
	
	//verificação das condições e exibição da informação na tela
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
