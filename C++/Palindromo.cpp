#include <stdlib.h>
#include <iostream>
#include <conio.h>

#include <string.h>

using namespace std;
bool esPalindromo(char* cadenaAEvaluar);
//char* quitaEspacios(char* cadena);
char* invertirCadena(char* cadenaOriginal);
char invertida[100];
char sinespacios[100];

int main() {
	cout << invertirCadena("No tengo idea") << endl;

//	char* res= sinespacios("Eli Alejandro");
//	cout << res << endl;
	
	return 0;
}

bool esPalindromo(char* cadenaAEvaluar){
	//return (invertirCadena(quitaEspacios(cadenaAEvaluar))==quitaEspacios(cadenaAEvaluar));
	return (invertirCadena(cadenaAEvaluar) == cadenaAEvaluar);
}



char* invertirCadena(char* cadenaOriginal){
	int i, j, tamanio;
	
	tamanio = strlen(cadenaOriginal);
	
	for (i = tamanio - 1, j = 0; i >= 0; i--, j++){
		invertida[j] = cadenaOriginal[i];
		invertida[tamanio] = '\0';
	}
	return invertida;
}