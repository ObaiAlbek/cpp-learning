#include <iostream>
#include <array>

using namespace std;
/*
 * -  keine Notwendigkeit für das Schlüsselwort new bei der Initialisierung eines Arrays,
 * -  (sizeof) Methode: gibt  die Größe des gesamten Arrays in Bytes,
 * 		jedes index hat 4Byte
 *
 * 	. Array Methode:
 * 	 1. arrayName.front(); 	 gibt das erste Wert
 * 	 2. arrayName.back(); 	 gibt das letzte Wert
 * 	 3. arrayName.at(index); gibt den Wert an Index
 *	 4. arrayName.size(); gibt die Länge des Arrays
 *	 5. arrayName.empty(); gibt true, wenn array leer ist oder false fall si nicht
 *
 *
 */

int main(){



	// keine Notwendigkeit für das Schlüsselwort "new"
	int arr[5] = {1,2,4,3,4};


	// das geht nicht
	/*int arr[5];
	 * arr = {1,2,3,4,5} //Fehler
	 *
	 */

	// die länge des Arrays
	cout<< sizeof(arr) / sizeof(arr[0])<<endl;



	// user input mit forschleife annehmen:
	for (size_t i = 0; i < 5; i++) {
		cin >> arr[i] ;
		//size_t stellt sicher, dass der Index i immer nicht-negativ ist,
			//da Array-Indizes nie negativ sein können.
	}

	// Array mit forschleife ausgeben:
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}

	// char Array:
	// Deklaration und Initialisierung eines Zeichen-Arrays
	// keine Notwendigkeit Forloops
	//'\0' zeigt das Ende der Zeichenkette an und ist in C++ bei Zeichen-Arrays erforderlich, um sie als gültige Strings zu behandeln.
	char str[] = { 'H', 'e', 'l', 'l', 'o', '\0' }; // Manuelle Initialisierung mit '\0'
	cout << "Zeichen-Array: " << str <<endl;
	return 0;
}


