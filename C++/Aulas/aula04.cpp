#include <iostream>

using namespace std;

int main() {
	
	//TIPO NOME;
	//TIPO NOME = VALOR;
	
	int vidas=0; //N�meros inteiros negativos ou positivos.
	char letra='B'; //Recebe caracteres dentro da apostrofe ' '.
	double decimal=5.2; //N�meros reais.
	float decimal2=5.2; //N�meros reais, mas, com menor precis�o.
	bool vivo=true; //True or False.
	string nome="Igor"; //Cadeia de caracteres dentro das aspas " ".
	
	/* Comenta tudo */ 
	
	cout << "Digite o numero de vidas: ";
	cin >> vidas;
	cout << "Digite uma letra: ";
	cin >> letra;
	cout << "Digite um valor decimal: ";
	cin >> decimal;
	cout << "Digite seu nome: ";
	cin >> nome;
	
	cout << "\nVidas: " << vidas << "\nLetra: " << letra << "\nNumero: " << decimal << "\nVivo: " << vivo << "\nNome: " << nome << "\n";	
	
	
	system("pause");
	return 0;
}
