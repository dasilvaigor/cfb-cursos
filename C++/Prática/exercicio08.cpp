/*
Nome: Igor Santos da Silva
Data: 25/05/2023
Descri��o: Ler a idade de uma pesso a informar se � obrigada ou n�o votar. Se idade for menor 18 ou maior que 65, n�o � obrigado.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	int age;
	
	//User data request.
	cout << "Enter your age: ";
	cin >> age;
	
	system ("cls");
	
	//Checking the conditions and displaying the information on the screen.
	if (age < 18 || age > 65) {
		cout << "You are not required to vote.\n";
	} else {
		cout << "You are required to vote.\n";
	}
	
	system("pause");
	return 0;
}
