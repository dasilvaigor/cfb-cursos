/*
Nome: Igor Santos da Silva
Data: 26/05/2023
Descrição: Uma financeira usa o seguinte critério para conceder empréstimos: o valor total do empréstimo deve ser até dez vezes o valor da renda mensal do solicitante 
e o valor da prestação deve ser no máximo 30% da renda mensal do solicitante. Escreva um programa que leia a renda mensal de um solicitante, o valor total do empréstimo solicitado 
e o número de prestações que o solicitante deseja pagar e informe se o empréstimo pode ou não ser concedido.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	float monthlySalary, borrowing, installments, installmentValue;
	
	//User data request.
	cout << "Monthly salary: U$";
	cin >> monthlySalary;
	cout << "Loan requested: U$";
	cin >> borrowing;
	cout << "Number of installments: ";
	cin >> installments;
	
	system("cls");
	
	//Checking the installment amount.
	installmentValue = borrowing / installments;
	
	//Checking loan approval or disapproval.
	if (borrowing <= (monthlySalary*10) && installmentValue <= (monthlySalary*0.3))  {
		cout << "Approved\n\n";
	} else {
		cout << "Disapproved\n\n";
	}
	
	//Presenting the information on the screen.
	cout << "Loan requested: U$" << borrowing << "\n";
	cout << "Number of installments:" << installments << "\n";
	cout << "Installment value:: U$" << installmentValue << "\n";
		
	system("pause");
	return 0;
}
