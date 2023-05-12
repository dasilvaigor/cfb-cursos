#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	
	int n1, n2, res;
	char opc;
	
	inicio:
	
	system("cls");
	
	cout << "Digite o o valor da nota 1: ";
	cin >> n1;
	cout << "Digite o o valor da nota 2: ";	
	cin >> n2;
	
	res = n1+n2;
	
	/*
		nota >= 60 			APROVADO
		nota < 60 e >= 40 	RECUPERAÇÃO
		nota < 40 			REPROVADO 
	*/
	
	if (res >= 60){
		cout << "\nAluno APROVADO\n";
	} else if (res >= 40){
		cout << "\nAluno em RECUPERACAO\n";
	} else {
		cout <<"\nAluno REPROVADO\n";
	}
	
	cout << "\nDigitar outras notas? [s/n]: ";
	cin >> opc;
	
	if (opc == 's' or opc == 'S'){
		goto inicio;
	}
	
	
	system("pause");
	return 0;
}
