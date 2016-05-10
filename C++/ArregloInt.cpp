#include <stdlib.h>
#include <iostream>
using namespace std;




int main()
{  
	//t arregloEnteros[5];
	char arregloChar[6];
	char copiaArreglo[6];

	arregloChar[0]='A';
	arregloChar[1]='R';
	arregloChar[2]='A';
	arregloChar[3]='N';
	arregloChar[4]='Z';
	arregloChar[5]='A';

	
     
    for (int i = 5; i >= 0; i--)
     {
     
   	cout << arregloChar[i]<<endl;

     } 


	system("pause");
	return 0;
}