#include <iostream>
using namespace std;
int main(){
	
	//(expressão) ? valor=1 : valor=2;
	
	//int n1, n2, nota;
	int n1, x;
	string res;
	
	/*cout << "Digite a primeira nota: ";
	cin >> n1;
	cout << "Digite a segunda nota: ";
	cin >> n2;
	
	nota = n1+n2;*/
	
	x = 5;
	
	cout << "Digite um valor: ";
	cin >> n1;
	
	(n1 >= 10) ? x++ : x--;
	
	cout << "\nNovo valor do X: " << x << "\n";
	
	// >= 60   APROVADO
	// < 60    REPROVADO
	
	//(nota >= 60) ? res = "APROVADO" : res = "REPROVADO";
	/*res=(nota >= 60) ? "Aprovado" : "Reprovado";
	
	cout << "\nSituacao do aluno: " << res << "\n\n";*/
	
	system("pause");
	return 0;
}
