#include <iostream>
using namespace std;

/*
 *  - Alle anderen Daten Typs sind wie in java, außer
 *   .boolean (geschrieben bool)
 *
 *  - es gibt (signed und unsigned)
 *   . unsigned: speichert nur werte, die Positiv sind
 *   . signed  : speichern negative und positive Numbers
 *
 *  - auto var: aktzptiert bel.viele DatenTyps
 *  	.Beispiel:
 *  		1. auto x = 12; int
 *  		2. auto x = 12.4; double
 *  		3. auto x = 12.4f; float
 *
 *  - alias:
 */

int main() {

	// boolean
    bool wahr = true; // gibt 1 zurück
    bool falsch = false;// gibt 0 zurück

    // Das gleiche Prinzip ist auch für false;

    int x = wahr; // speichert 1

    if (wahr)
    	cout << "if wahr " << wahr <<endl;

    //oder
    if (wahr == 1)
       	cout << "if wahr == 1 " << wahr <<endl;
    else
    	cout << "Wert von false: " << falsch <<endl;

     (wahr == 1) ? cout << "if wahr == 1 " << wahr <<endl : 	cout << "if wahr == 1 " << wahr <<endl;

     // 2 Strings mit einander verketten
     string str1 = "dasdwaq";
	 string str2 = "dwadw";
	 string result = str1 + str2;

	 cout << result << endl;

    //unsigned [int, char] kann nur positive Werte speichern //
    unsigned int f = 9; // soll nur Positive numbers speichern
    cout << f << endl;


    // bool Beispiele:
    bool zahl1 = 100; // gibt 1 aus
    bool zahl2 = -100; // gibt 1 aus
    bool zahlZero = 0; // gibt o aus


    // Alias 1 (using).
    using zahl = int;
    zahl x = 100;
    cout << x;


    return 0;
}
