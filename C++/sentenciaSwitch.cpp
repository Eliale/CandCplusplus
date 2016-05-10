#include <iostream>// ibreria para mostrar para salida y entrada de datos en pantalla
#include <stdlib.h>// Libreria para pausa del sistema
#include <string>
using namespace std;


int main()
{
	int mes;

string nombremes;

cout << "Digite numero de mes" << endl;
cin>> mes;
switch(mes){

case 1: {
//cout << "enero" << endl;
nombremes="Enero";
break;
}

case 2: {
	//cout << "febrero" << endl;
	nombremes="febrero";
break;
}

case 3: {
	//cout << "marzo" << endl;
nombremes="marzo";

     break;
}
 case 4:{
 	//cout << "abril" << endl;
nombremes="abril";

break;
 }
 case 5:{
 //	cout << "mayo" << endl;

nombremes="mayo";

break;
 }
 case 6: {
 	//cout << "junio" << endl;
nombremes="junio";

break;
 }
 case 7:{
 	//cout << "julio" << endl;
nombremes="julio";

break;
 }

 case 8:{
 	//cout << "agosto" << endl;
nombremes="agosto";
break;
 }

  case 9:{
 	//cout << "septiembre" << endl;

 	nombremes="septiembre";
break;
 }

  case 10:{
 	//cout << "octubre" << endl;

 	nombremes="octubre";
break;
 }

  case 11:{
 //	cout << "noviembre" << endl;

 	nombremes="noviembre";
break;
 }

  case 12:{
 	//cout << "diciembre" << endl;
nombremes="diciembre";

break;
 }
 default: {

 	nombremes="no existe";
break;}

}

cout<<nombremes<<endl;




	system("pause");
	return 0;
}