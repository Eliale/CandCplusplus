#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;



int main(){

bool sigue=true;
char continuar;

while(sigue){

int a;
int b;
int resultado;
cout << "Ingrese 1er numero por favor" << endl;
cin >> a;
cout << "Ingrese 2do numero" << endl;
cin >> b;
resultado=a+b;
cout << "Resultado: " << resultado << endl;
		
cout <<	"Desea continuar? S/N Oprima S  "<< endl;
cin >>continuar;
if (continuar=='S' || continuar=='s')
	{
		sigue=true;
	}
	else{
		sigue=false;
	}	


}

    system("pause");
	return 0;
}

