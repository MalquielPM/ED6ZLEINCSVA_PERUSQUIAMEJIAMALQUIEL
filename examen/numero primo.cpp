#include <iostream>
bool esprimo(int numero);

int main(){
	int numero;
	std:: cout << "ingresa un numero para saber si es primo:\n";
	std:: cin >> numero;
	if (esprimo(numero)) {
		std:: cout << "es primo";
		} else {
			std:: cout << "no es primo";
		}
	
}
