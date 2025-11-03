#include <iostream>
using namespace std;
/*
 * - ist eine benutzerdefinierte Datentyp-Deklaration, die  beliebig viele Felder haben können
 * - Zugriff auf Strukturmitglieder:  erfolgt mit
 * 		. dem Punkt-Operator (.), o
 * 		. der bei Verwendung von Zeigern mit dem ->Operator
 *
 * 	-Struktur ist gut, wenn ich von einer Methode mehrere Werte zurücgeben will
 *
 */


// Definition einer Struktur "Person"
struct Person {
    string name;
    int alter;
    float groesse;
};

// erstelle eine method ,die Person Obejkt übernimmt:
void printPersonDaten(Person person){

	cout<< "Name: " << person.name<<endl;
	cout<< "Alter: " << person.alter<<endl;
	cout<< "Größe: " << person.groesse<<endl;
}

// Kurzform für die Struktur "Person" warum?
// weil in C musst du beim Deklarieren einer Strukturvariable immer das Schlüsselwort struct verwenden.
// beispiel in c: struct Kurzform Kurzform;
typedef struct {
    std::string name;
    int alter;
    float groesse;
} Kurzform;

//Verschachtelte Strukturen

struct Adresse {
    string stadt;
    string strasse;
    int hausnummer;
};

struct Mensch {
    string name;
    int alter;
    Adresse adresse;  //Struktur an Mensch senden
}mensch;// soll in main nicht Mensch mensche...


// Definition einer Struktur "Person" mit (Zugriffsmodifikatoren )
struct PersonMitZugriffsmodifikatoren {
    // Öffentliche Mitglieder
public:
    string name;

    // Private Mitglieder
private:
    int alter;
    float groesse;

public:
    // Öffentliche Methode, um auf private Mitglieder zuzugreifen
    void setPersonData(int a, float g) {
        alter = a;
        groesse = g;
    }
    // Öffentliche Methode, um die private Mitglieder auszugeben

    void printPersonData() {
        cout << "Name: " << name << endl;
        cout << "Alter: " << alter << endl;
        cout << "Größe: " << groesse << endl;
    }
};

int main() {

	// Deklaration einer Struktur-Variable vom Typ Person
	Person person1;
	cout<<"Das ist Person1:"<<endl;
	printPersonDaten(person1);


	// oder Initialisierung einer Struktur bei der Deklaration
	Person person2 = {"Bob", 25, 1.80};

	person1.name = "Alice";
	person1.alter = 30;
	person1.groesse = 1.75;

	// Ausgabe der Strukturmitglieder
	cout << "Name: " << person1.name <<endl;
	cout << "Alter: " << person1.alter <<endl;
	cout << "Größe: " << person1.groesse << " Meter" <<endl;


//------------------------------------------------------------------------

	// oder Zugriff auf die Strukturmitglieder mit zeigern
		 // Initialisierung einer Struktur
		    Person person3 = {"Charlie", 40, 1.90};

		    // Zeiger auf die Struktur
		    Person* personZeiger = &person3;

	// Zugriff auf Strukturmitglieder mit dem Zeiger
	cout << "Name: " << personZeiger->name << endl;
	cout << "Alter: " << personZeiger->alter << endl;
	cout << "Größe: " << personZeiger->groesse << " Meter" <<endl;



//------------------------------------------------------------------------

	  // Array von Strukturen
	  Person personen[3] = {
	        {"Alice", 30, 1.75},
	        {"Bob", 25, 1.80},
	        {"Charlie", 40, 1.90}
	    };

	  // Zugriff auf die Strukturmitglieder im Array
	for (int i = 0; i < 3; i++) {
		std::cout << "Name: " << personen[i].name <<endl;
		std::cout << "Alter: " << personen[i].alter <<endl;
		std::cout << "Größe: " << personen[i].groesse << " Meter" <<endl;
		std::cout << "------------------" <<endl;
	}

//------------------------------------------------------------------------
	// Initialisierung einer Struktur mit verschachtelter Struktur
	Mensch mensch = { "Diana", 35, { "Berlin", "Hauptstraße", 12 } };

	// Zugriff auf die verschachtelten Strukturmitglieder
	cout << "Name: " << mensch.name <<endl;
	cout << "Alter: " << mensch.alter <<endl;
	cout << "Stadt: " << mensch.adresse.stadt <<endl;
	cout << "Straße: " << mensch.adresse.strasse <<endl;
	cout << "Hausnummer: " << mensch.adresse.hausnummer <<endl;
	std::cout << "------------------" <<endl;


//------------------------------------------------------------------------
	PersonMitZugriffsmodifikatoren p1;
	p1.name = "Alice";  // Öffentlich, direkter Zugriff möglich
	// p1.alter = 25;    // Fehler: alter ist privat, direkter Zugriff nicht möglich
	// p1.groesse = 1.75; // Fehler: groesse ist privat, direkter Zugriff nicht möglich

	// Setze private Daten über eine öffentliche Methode
	p1.setPersonData(25, 1.75);

	// Ausgabe der Personendaten
	p1.printPersonData();
	return 0;
}
