/*
Nome: Igor Santos da Silva
Data: 26/05/2023
Descri��o: Uma financeira usa o seguinte crit�rio para conceder empr�stimos: o valor total do empr�stimo deve ser at� dez vezes o valor da renda mensal do solicitante 
e o valor da presta��o deve ser no m�ximo 30% da renda mensal do solicitante. Escreva um programa que leia a renda mensal de um solicitante, o valor total do empr�stimo solicitado 
e o n�mero de presta��es que o solicitante deseja pagar e informe se o empr�stimo pode ou n�o ser concedido.
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
