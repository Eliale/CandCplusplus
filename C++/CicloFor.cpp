#include <iostream>// ibreria para mostrar para salida y entrada de datos en pantalla
#include <stdlib.h>// Libreria para pausa del sistema

using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		

		for (int tabla2 = 1; tabla2 <=10 ; tabla2++)
		{
			
			cout << i<<"x"<< tabla2<<"="<<i*tabla2 << endl;
		}


	}






	system("pause");
	return 0;
}