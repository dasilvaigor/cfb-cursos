/*
Nome: Igor Santos da Silva
Data: 26/05/2023
Descrição: Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. Caso sexo seja “F” e estado civil seja “CASADA”, solicitar o tempo de casada (anos).
Por fim, mostre os dados do usuário. 
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	string personsName, personsSex, maritalStatus, marriedYears;
	
	//User data request.
	cout << "Enter your name: ";
	cin >> personsName;
	cout << "Enter your sex [M/W]: ";
	cin >> personsSex;
	
	//Response personalization.
	if (personsSex == "w") {
		personsSex = "W";
	}
	cout << "Enter your marital status: ";
	cin >> maritalStatus;
	
	//Response personalization.
	if (maritalStatus == "casada" or maritalStatus == "Casada") {
		maritalStatus = "CASADA";
	}
	
	if (personsSex == "W" && maritalStatus == "CASADA") {
		cout << "Enter length of marriage in years: ";
		cin >> marriedYears;
	}
	
	system("cls");
	
	//Checking the conditions and displaying the information on the screen.
	cout << "Name: " << personsName << "\n";
	cout << "Sex: " << personsSex << "\n";
	cout << "Marital status: " << maritalStatus << "\n";
	if (personsSex == "W" && maritalStatus == "CASADA") {
		cout << "Married years: " << marriedYears << "\n";
	}
	
	system("pause");
	return 0;
}
