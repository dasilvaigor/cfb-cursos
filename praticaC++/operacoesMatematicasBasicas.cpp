#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	
	float num1, num2, soma, sub, div, mult;
	
	//solicitação de dados ao usuários
	cout << "Informe o primeiro numero: ";
	cin >> num1;
	cout << "Informe o segundo numero: ";
	cin >> num2;
	
	//realizando operações com os dados fornecidos
	soma = num1+num2;
	sub = num1-num2;
	div = num1/num2;
	mult = num1*num2;
	
	system("cls");
	
	//exibição das informações na tela
	cout << "Numeros digitados: " << num1 << " e " << num2 << "\n\n";
	cout << "Soma          = " << soma << "\n";
	cout << "Subtracao     = " << sub << "\n";
	cout << "Divisao       = " << div << "\n";
	cout << "Multiplicacao = " << mult << "\n";
	
	system("pause");
	return 0;
}
