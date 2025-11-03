#include <iostream>
#include <cstdarg>
using namespace std;

// Funktion außerhalb der Klasse
int add(int a, int b) {
	return a + b;
}

/*Methode mit Standardparameter:
 *  - Sobald du einem Parameter einen Standardwert zuweist,
 *  	müssen alle nachfolgenden Parameter ebenfalls Standardwerte haben.
 *
 *  also z.B
 *  int add2(int a = 10, int b) { Fehler! b muss auch einen Standardwert haben
 */

int add2(int a, int b = 10) { // b hat einen Standardwert von 10
	return a + b;
}



//Variadische Funktionen
int sum(int count, ...) {
	va_list args;
	va_start(args, count);
	int result = 0;
	for (int i = 0; i < count; i++) {
		result += va_arg(args, int);
	}
	va_end(args);
	return result;
}

/*
 * Inline-Methoden:
 * - Der Compiler versucht, den Code der Methode direkt am Funktionsaufruf einzufügen,
 *   anstatt zur Speicheradresse der Funktion zu springen.
 *
 */
inline double add(double a, double b) {
    return a + b;
}

int main() {

    // Der Compiler kann hier entscheiden, ob die Funktion `add` inline ersetzt wird.
    int a = 5;
    int b = 5;

    // Es wird versucht, den Code `return a + b;` direkt hier einzufügen (kein Sprung).
    std::cout << "Die Summe ist: " << add(a, b) << std::endl;

    // Hier ist die Funktion `add` tatsächlich inline (keine Sprünge).
    double a2 = 5.2;
    double b2 = 5.2;

    // Es wird erwartet, dass der Code für `add(a2, b2)` direkt hier eingefügt wird.
    std::cout << "Die Summe ist: " << add(a2, b2) << std::endl;

    return 0;
}
