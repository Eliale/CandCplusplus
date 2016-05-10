#include <iostream>// ibreria para mostrar para salida y entrada de datos en pantalla
#include <stdlib.h>// Libreria para pausa del sistema

using namespace std;

int main(){
	
int diasemana;
cout << "Digite un numero del 1 al 7"<< endl;
cin>> diasemana;

if(diasemana==1){
cout << "Domingo" << endl;
}
else
 if(diasemana==2){
cout << "Lunes" << endl;
} 
else if (diasemana==3)
{
	cout << "Martes" << endl;
}
else if (diasemana==4)
{
	cout << "Miercoles" << endl;
}
else if (diasemana==5)
{
	cout << "Jueves" << endl;
}
else if (diasemana==6)
{
	cout << "viernes" << endl;
}
else if (diasemana==7)
{
	cout << "Sabado" << endl;
}
else {cout << "No existe ese dia" << endl;}

	system("pause");
	return 0;
}