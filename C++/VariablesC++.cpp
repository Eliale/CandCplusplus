#include <string> //Libreria para usar String
#include <iostream>// ibreria para mostrar para salida y entrada de datos en pantalla
#include <stdlib.h>// Libreria para pausa del sistema

#define valor_constante 18 //Este valor no puede cambiar durante la ejecucion del programa


using namespace std;
int variableEntera=10;
float variableDecimal=3.1416;
double variableDecimalLarga=3.14159258;
char variableCaracter='E';
string variableCadena="Texto";
bool variableLogica=true;
const string constanteNombre="Max Power"; // Esta cosntante  no podra cambiar durante el tiempo de ejecucion
//char* cadena="Aranza";

int main()
{
	cout << variableEntera << endl;
	cout << variableDecimal << endl;
	cout << variableDecimalLarga<< endl;
	cout << variableCaracter<< endl;
	cout << variableCadena << endl;
	cout << variableLogica << endl;
	cout << constanteNombre << endl;
	cout << valor_constante << endl;

	cout << variableCadena+constanteNombre<<" "<<variableCaracter << endl;

system("pause");// Pausa el sistema
return 0;
	}