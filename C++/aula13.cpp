#include <iostream>
using namespace std;
int main (){
	
	int val;
	
	/*switch(expressão) {
		case const1:
			comandos;
			break;
		case const2:
			comandos;
			break;
		default:
			comandos;
	}*/
	
	cout << "[1]CARRO    [2]MOTO    [3]AVIAO    [4]HELICOPTERO\n";
	cout << "Selecione um tranporte: ";	
	cin >> val;
	
	/*switch (val) {
		case 1:
			cout << "Cor selecionada: VERDE\n";
			break;
		case 2: 
			cout << "Cor selecionada: AZUL\n";
			break;
		case 3:
			cout << "Cor selecionada: VERMELHO\n";
			break;
		default:
			cout << "Valor selecionado invalido\n";
	}*/
	
	/*switch (val) {
		case 1:
		case 2: 
		case 3:
			cout << "\nCor selecionada: VERDE\n";
			break;
		case 4:
		case 5: 
		case 6:
			cout << "\nCor selecionada: AZUL\n";
			break;
		default:
			cout << "\nValor selecionado invalido\n";
	}*/
	
	switch (val) {
		case 1:
		case 2:
			cout << "\nTransporte TERRESTRE\n";
			switch (val){
				case 1:
					cout << "\nCARRO selecionado\n";
					break;
				case 2:
					cout <<"\nMOTO selecionada\n";
					break;
			}
			break; 
		case 3:
		case 4:
			cout << "\nTransporte AEREO\n";
			switch (val){
				case 3:
					cout << "\nAVIAO selecionado\n";
					break;
				case 4:
					cout <<"\nHELICOPTERO selecionado\n";
					break;
			}
			break;
		default:
			cout << "\nTransporte selecionado INVALIDO\n";
	}
	
	cout << "\nPrograma finalizado\n";
	
	return 0;
}
