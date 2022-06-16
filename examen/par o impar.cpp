#include <iostream>
#include <CSTDLIB>

using namespace std;
int numero;
int main(){
	div_t resultado;
	while (1==1){
		cout << " introduce un numero " << endl;
		cin >> numero;
		resultado=div (numero,2);
		if (resultado.rem>0)
		{
			cout << numero << " el numero introducido es impar " << endl;
		}
		else{
			cout << numero << " el numero introducido es par " << endl;
	}} 
	cin.get();
	cin.ignore();
	return 0;	
	
	}
