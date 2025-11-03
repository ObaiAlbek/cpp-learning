#include <iostream>
using namespace std;

/*
 *  - wenn man Zeichenketten verwendet, die spezielle Zeichen enthalten müssen, wie z.B. Zeilenumbrüche,
 *    Tabulatoren, oder wenn man besondere Zeichen (wie Anführungszeichen) in einer Zeichenkette verwenden möchte.
 */

int main() {

	//1. \n: Neue Zeile
	cout << "Hallo\nWelt!" << endl;
	cout << " " << endl;

	//2. \t: Horizontaler Tabulator (Trennung)
	cout << "Name\tAlter\tOrt" << endl;
	cout << " " << endl;
	//3. \\ - Backslash

	cout << "This is a backslash: \\" << endl;
	cout << " " << endl;

	/*
	 * 4.  löscht was vor dem \ r
	 *  "H" wird durch "W" ersetzt.
	 *  "e" wird durch "o" ersetzt.
	 *  "l" wird durch "r" ersetzt.
	 *  "l" wird durch "l" ersetzt.
	 *  "o" wird durch "d" ersetzt.
	 *
	 */
	cout << "Hello\rWorld" << endl;
	//Löscht das vorhergehende Zeichen in der Zeichenkette.
	cout << "12345\b6"  << endl;

	return 0;
}
