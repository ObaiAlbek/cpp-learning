#include <iostream>
using namespace std;

/*
 * Was ist Aliasing?
 *
 * Aliasing tritt auf, wenn zwei oder mehr Referenzen, Zeiger oder Variablen
 * auf denselben Speicherort verweisen. Das bedeutet, dass eine Änderung des
 * Werts über eine Referenz auch den ursprünglichen Speicherort beeinflusst,
 * auf den andere Referenzen zeigen. In diesem Beispiel wird Aliasing durch
 * Referenzen demonstriert.
 */
int main(){



	/*
	 * Aliasing (mit Referenzen):
	 */
	int x = 10;
	int &alias = x;  // alias zeigt auf die x adresse

	cout << "x: " << x << endl;
	alias = 20;  // Ändere den Wert von der x Adresse  über die Referenz

	cout << "x nach der Änderung: " << x << endl; // x adresse  wurde geändert, weil alias auf x zeigt

	/*
	 * Aliasing (mit Zeigern):
	 */

	int x2 = 15;
	int *ptr = &x2;  // ptr zeigt auf x

	cout << "x2: " << x2 <<endl;
	*ptr = 20;  // Ändere den Wert über den Zeiger

	cout << "x2 nach der Änderung: " << x2 << endl; // x wurde geändert, weil ptr auf x zeigt

	return 0;

}


