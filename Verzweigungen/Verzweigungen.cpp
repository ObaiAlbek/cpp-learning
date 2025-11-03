#include <iostream>
using namespace std;
/*
 * - C++ erlaubt es außerdem, Ganzzahlen in if-Statements zu verwenden.
 * 		Jede Zahl != 0 wird als (true) betrachtet, während 0 als false gilt.
 */


int main() {

	int x = 1;
	if (x)  // wahr, da x ungleich 0
	    cout << "x is non-zero" <<endl;

	int y = -1;
	if (y)  // wahr, da x ungleich 0
		    cout << "y is non-zero" <<endl;

	/*
	 * ternären Operator:
	 * - condition ? expression_if_true : expression_if_false;
	 */

	int a = 5;
	int result = (a > 0) ? 1 : -1;  // Wenn a > 0, result = 1, sonst -1


	/*
	 * switch (expression) {
	 *  case constant1:
	 *       Code für Fall 1
	 *  break;
	 *     case constant2:
	 *  	  Code für Fall 2
	 *  break;
	 *
	 *  default:
	 *     Code für den Standardfall
	 *
	 * Datentypen, die im switch verwendet werden können:
	 * - int, char, enum, und unsigned int.
	 *
	 */

	return 0;

}
