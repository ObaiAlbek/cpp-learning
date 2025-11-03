#include <iostream>
using namespace std;
	/*
	 * - Zeiger speichert die Speicheradresse einer anderen Variable
	 * - "*": ist die Zeiger (pointer), und zeigt nur auf Adressen im Ram
	 * - "&": ist die Adresse im Ram, auf die die Zeiger zeigt
	 * - void pointer: kann auf all datenTyps zeigen, aber soll erst gecastet werden
	 */

	/* Wichtig:
	 * int x = 7;
	 * int * p = &x;
	 *
	 * cout &x; // Ausgabe: die Adresse von x
	 * cout p;  // Ausgabe: die Adresse von x
	 * cout &p; // Ausagbe: die Adresse von p
	 * cout *p: // Ausgabe: der Wert vom x mit hilfe der Zeiger P
	 *
	 */
int main(){

	//Zeiger auf zeiger:
	int x = 5;
	int *zei = &x;  // Zeiger auf int
	int **zei2 = &zei;  // Zeiger auf Zeiger




	int* ptr2 = nullptr;  // ptr2 zeigt auf nichts (null)



	//int *ptr = 5; // falsch, weil Zeiger Speicheradresse erwartet

	int value = 5;
	//int *zeiger = value;// auch falsch, weil Zeiger Speicheradresse erwartet

	//richtig, Zeiger zeigt auf adresse
	int value2 = 5;
	int *zeiger = &value2;

	cout<< "Zeiger Value ist "<< *zeiger + 1<<endl;


	double y =12.2;
	void *ptr = &y;
	// casting erst
	double *cast = static_cast<double*>(ptr);
	cout<< "Zeiger Value mit casting ist "<< *cast<<endl;

	return 0;
}


