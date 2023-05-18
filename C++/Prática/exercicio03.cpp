/*
Nome: Igor Santos da Silva
Data: 17/05/2023
Descrição: Ler o nome de um aluno, idade e quatro notas. Calcula a média e apresentar Nome, Idade, Notas e Média.
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main ()  {
	
	string nameStudent, ageStudent;
	float note1, note2, note3, note4, average;
	
	cout << "Enter the student's name: ";
	cin >> nameStudent;
	cout << "Enter the student's age: ";
	cin >> ageStudent;
	cout << "\nEnter the first note: ";
	cin >> note1;
	cout << "Enter the second note: ";
	cin >> note2;
	cout << "Enter the third note: ";
	cin >> note3;
	cout << "Enter the fourth note: ";
	cin >> note4;
	
	average = (note1+note2+note3+note4) / 4;
	
	system ("cls");
	
	cout << "Name: " << nameStudent << "\n";
	cout << "Age: " << ageStudent << "\n\n";
	cout << "First note: " << note1 << "\n";
	cout << "Second note: " << note2 << "\n";
	cout << "Third note: " << note3 << "\n";
	cout << "Fourth note: " << note4 << "\n\n";
	cout << "Average: " << average << "\n";
	
	system("pause");
	return 0;
}
