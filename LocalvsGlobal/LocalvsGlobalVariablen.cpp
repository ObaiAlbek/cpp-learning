#include <iostream>
using namespace std;

	/*
	 * - Den Rest läuft wie in Java
	 */

	//globale Variabel
	int globalVar = 100;
int main() {

	// diese lokale Variable "überdeckt" die globale
	int globalVar = 200;


	 // (::) dient als this in java
	 cout << globalVar <<endl; // gibt 200 aus
	 cout << ::globalVar; // gibt 100 aus (globale Variable)

	return 0;
}


