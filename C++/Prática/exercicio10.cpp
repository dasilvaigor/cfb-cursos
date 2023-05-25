/*
Nome: Igor Santos da Silva
Data: 25/05/2023
Descri��o: Apresentar na tela se uma pessoa pode ou n�o se aposentar com base na idade ou tempo de servi�o prestado. Idade >= 65 e tempo de servi�o >= 30.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	int age, serviceTime;
	
	//User data request.
	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter your length of service: ";
	cin >> serviceTime;
	
	system("cls");
	
	//Checking the conditions and displaying the information on the screen.
	if (age >= 65 || serviceTime >= 30) {
		cout << "Apply for retirement!\n";
	} else {
		cout << "Do not apply for retirement!\n";
	}
	
	system("pause");
	return 0;
}
