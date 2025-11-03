#include <iostream>
using namespace std;
/*
 * Was ist eine konstante Variable?
 *  - Eine konstante Variable ist eine Variable, deren Wert nach der Initialisierung nicht geändert werden kann.
 *  - konstante Referenzen und konstante Zeiger sind auch möglich
 */

void print(const int &x2) {  // x ist eine konstante Referenz
	// x = 20;  // Fehler: Du kannst den Wert von x nicht ändern
	cout << "Wert von x2: " << x2 << endl;
}
int main() {
	const int x = 10;  // x ist eine konstante Variable
	//x = 20; //Fehler: Du kannst den Wert von x nicht ändern

	cout << "Wert von x: " << x << endl;

	int x2 = 10;
	print(x2);
	return 0;
}


