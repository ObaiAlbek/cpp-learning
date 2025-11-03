#include <iostream>
using namespace std;

/* (Call By Reference vs Call By Value)?
 * - Call By Value:
 * 	 * wird der Wert eines Arguments in die Funktion kopiert. (siehe Beispiel)
 * 	  	 Das bedeutet, dass Änderungen, die innerhalb der Funktion an dem Parameter vorgenommen werden, keine Auswirkungen auf das Original haben.
 *
 * - Call By Reference:
 * 	 * wird durch die Verwendung von Referenzen (&) oder Zeigern (*) möglich.
 * 		Änderungen am Parameter wirken sich direkt auf die ursprüngliche Variable aus.
 *
 * 	 * Wichtige Unterschiede:
 * 		1. Referenzen (int&):
 * 			- Funktioniert als ein Alias für die ursprüngliche Variable. Die
 * 			  Funktion erhält direkten Zugriff auf die Variable, ohne dass
 * 			  die Adresse explizit übergeben werden muss.
 * 			  Kein &-Symbol beim Funktionsaufruf notwendig.
 *
 *		2. Zeiger (int*):
 *			- Ein Zeiger speichert die Adresse der Variablen. Damit die
 *			  Funktion weiß, wo die Variable im Speicher steht, muss die Adresse übergeben werden.
 *			  & ist beim Funktionsaufruf notwendig, da du die Adresse übergeben musst.
 */

int CallByValue(int x) {
    return x++;  // Call by Value: Der Wert wird inkrementiert, aber es hat keine Auswirkung auf das Original
}

int CallByReference(int &x2) {
    return x2++;  // Call by Reference: Inkrementiert den Wert direkt, der Referenzierte Wert ändert sich
}

int CallByZeigern(int *x3) {
    return (*x3)++;  // Call by Pointer: Dereferenziert den Zeiger und inkrementiert den Wert, auf den der Zeiger zeigt
}

int main(){
    // Call By Value Beispiel:
    int x = 4;
    CallByValue(x);
    cout << "X1 (Call by Value): " << x << endl;  // Ausgabe = 4, da der Wert nur in der Funktion geändert wird, nicht im Original.

    // Call By Reference:
    int x2 = 4;
    CallByReference(x2);
    cout << "X2 (Call by Reference): " << x2 << endl;  // Ausgabe = 5, der Wert wurde direkt geändert.

    // Call By Zeiger:
    int x3 = 4;
    CallByZeigern(&x3);  // Übergebe die Adresse von x3
    cout << "X3 (Call by Pointer): " << x3 << endl;  // Ausgabe = 5, der Wert wurde durch den Zeiger geändert.

    return 0;
}




