#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
bool CadenasIguales(char* cad1,char*cad2);
char* convierteAMinuscula(char* cadena);

int main(){
	char* nombre="Eli Alejandro Salinas Perez";
	char* nombre2="ELI  SALINAS PEREZ";
	if(CadenasIguales(nombre,nombre2)==true){
     cout << " Iguales"<< endl;
	}
	else{
		cout <<"Diferentes"<< endl;
	}
	
	//char* nuevo=convierteAMinuscula(nombre2);
	//cout << nuevo << endl;

    system("pause"); 
	return 0;
}

bool CadenasIguales(char* cad1,char* cad2){
	//Si las cadenas son iguales sin importar sin son mayusculas o minuscuslas (strcmpi) y strcmpi (importan mayus/minus)
	if(strcmpi(cad1, cad2)==0){
      
     return true;
	}
return false;
}
char* convierteAMinuscula(char* cadena){
	return strlwr(cadena);

}
