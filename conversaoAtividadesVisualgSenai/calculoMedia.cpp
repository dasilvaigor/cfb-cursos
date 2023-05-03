#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	char nomeAluno;
	int idadeAluno;
	float nota1, nota2, nota3, nota4, media;
	
	cout << "Nome do aluno: ";
	cin >> nomeAluno;
	cout << "Idade do aluno: ";
	cin >> idadeAluno;
	cout << "1a. nota: ";
	cin >> nota1;
	cout << "2a. nota: ";
	cin >> nota2;
	cout << "3a. nota: ";
	cin >> nota3;
	cout << "4a. nota: ";
	cin >> nota4;
	
	system ("cls");
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	cout << "Nome do aluno: " << nomeAluno << "\n";
	cout << "Idade: " << idadeAluno << "\n\n";
	cout << "1a. nota: " << nota1 << "\n";
	cout << "2a. nota: " << nota2 << "\n";
	cout << "3a. nota: " << nota3 << "\n";
	cout << "4a. nota: " << nota4 << "\n\n";
	cout << "Media: " << media << "\n\n";
	
	system("pause");
	return 0;
}
