#include <iostream>
using namespace std;
int main () {
	
	//int tam=5;
	int vetor[5]={10, 20, 30, 40, 50};
	int i;

	//sizeof(vetor) - indica o tamanho do vetor em bytes (cada item do vetor inteiro possui um tamanho de 20 bytes).
	
	for(i=0 ; i<sizeof(vetor)/4; i++){
		cout << vetor[i] << "\n";	
	}
	
	
	return 0;
}
