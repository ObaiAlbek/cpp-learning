#include <iostream>
using namespace std;

/*  Hinweis: in c++ soll man nicht immer casting, das wird in c++ automatisch
 *
 *
 * ES sind 4 Casting-Arten in C++:
 * 1. static_cast<datentyp>:  für primitive Variable
 * 2. dynamic_cast: Downcasting von einem Basisklassenzeiger zu einem abgeleiteten Klassenzeiger. Zur Laufzeit wird überprüft
 * 		,ob die Umwandlung gültig ist.
 * 3. const_cast:wird verwendet, um die const- oder volatile-Qualifizierer von einem Zeiger oder einer Referenz zu entfernen oder hinzuzufügen.
 * 4. reinterpret_cast: wird verwendet, um einen Zeiger oder eine Referenz in einen anderen, möglicherweise nicht verwandten Typ umzuwandeln
 *
 */

int main() {
	double d = 9.78;

	/*
	 *  man kann so casting: (int) z;
	 *  			   oder: int(z)
	 */

	//traditionelle Methode des Castings (int) ist hier optional
	int x  = (int) d;
	cout<<"Die traditionelle Methode des Castings: " << x <<endl;


	//modernere und bevorzugte Methode des Castings in C++
	int i = static_cast<int>(d);
	cout<< "Die modernere und bevorzugte Methode des Castings: " << i;

    return 0;
}
