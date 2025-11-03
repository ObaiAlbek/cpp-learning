#include <iostream>
#include <string.h>;
using namespace std;

	/*
	 * String: ist eine Array of chars
	 * \0 => Null
	 */
int main(){
	string str = "Hello, World!"; // Hello, World!
	str = "Hello\0, World!"; // Hello (\0 schneidt den String)

	//String ist chars
	char name[]  = "obai";

	// Länge des Strings
	cout << "Länge des Strings: " << str.length() << endl;
	// Länge des Strings: 5; warum, weil Compiler nutzt immer am Ende \0, um zu makieren dass der Text zu Ende ist

	cout << "Obai\0Albek"<< endl;
	// Ausgabe: Obai


	// Konkatenation (Verkettung) von Strings
	string str2 = str + " Wie geht's?";
	cout << "Verketteter String: " << str2 <<endl;


	// Zugriff auf einzelne Zeichen
	cout << "Erstes Zeichen: " << str[0] << endl;

	// Vergleich von Strings
	if (str == "Hello, World!")
		cout << "Die Strings sind gleich" << endl;

	return 0;
}
