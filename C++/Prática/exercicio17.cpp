/*
Nome: Igor Santos da Silva
Data: 26/05/2023
Descrição: Escreva um programa que leia do teclado as duas notas de um aluno, calcule e exiba a média aritmética das notas. O programa deve, adicionalmente, exibir uma mensagem de parabéns 
caso o aluno esteja aprovado (média superior ou igual a 6,0), média até 4,0, o aluno está em recuperação, caso a média seja inferior a 4,0 o aluno será reprovado.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	int note1, note2, average;
	
	//User data request.
	cout << "Enter the first note: ";
	cin >> note1;
	cout << "Enter the second note: ";
	cin >> note2;
	
	system("cls");
	
	//Checking student average.
	average =  (note1 + note2) /2;
	
	//Checking the condition for approval and displaying the information on the screen.
	if (average >= 6) {
		cout << "Average: " << average << "\n";
		cout << "Congratulations, successful student!\n";
	} else if (average >= 4) {
		cout << "Average: " << average << "\n";
		cout << "Recovering student.\n";	
	} else {
		cout << "Average: " << average << "\n";
		cout << "Student failed.\n";
	}
	
	system("pause");
	return 0;
}
