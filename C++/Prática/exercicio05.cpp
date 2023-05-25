/*
Nome: Igor Santos da Silva
Data: 23/05/2023
Descrição: Ler o nome de um aluno, sua idade e três notas. Calcular a média, caso a média seja menor que 7 , apresentar "REPROVADO".
		   exibir na tela: nome, idade, média e se está aprovado ou reprovado.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main () {

	string studentName, studentAge;
	float note1, note2, note3, average;
	
	//User data request.
	cout << "Enter the student's name: ";
	cin >> studentName;
	cout << "Enter the student's age: ";
	cin >> studentAge;
	cout << "\nEnter the first note: ";
	cin >> note1;
	cout << "nEnter the second note: ";
	cin >> note2;
	cout << "nEnter the third note: ";
	cin >> note3;
	
	//Executing the operation and storing the value in variables.
	average = (note1 + note2 + note3) / 3;
	
	system("cls");

	//Display of information on the screen.
	cout << "Student's name: " << studentName << "\n";	
	cout << "Student's age: " << studentAge << "\n\n";
	cout << "First note: " << note1 << "\n";	
	cout << "Second note: " << note2 << "\n";
	cout << "Third note: " << note3 << "\n\n";
	cout << "Average: " << average << "\n";

	system("pause");
	return 0;
}
