#include <iostream>
using namespace std;
int main () {
	
	int cont;
	
	cont = 0;
	while(cont++<20) {
		cout << "Canal Fessor Bruno - " << cont << "\n";
		if (cont == 10){
			break;
		}	
	}
	
	cout << "\nRotina finalizada\n";
	
	return 0;
}
