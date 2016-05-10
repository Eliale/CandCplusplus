
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
struct Personaje {	
int edad;
string nombre;
char sexo;

Personaje(){
	edad=1;
	nombre="";
	sexo='H';
}

void setEdad(int age){
edad=age;
}
int getEdad(){
	return edad;
}
void setSexo(char sex){
  sexo=sex;
}
char getSexo(){
	return sexo;
}
void setNombre(string name){
nombre=name;
}
string getNombre(){
	return nombre;
}

}Lisa,Goku,Eli;

Lisa.setEdad(8);
Goku.setSexo('H');
Eli=Lisa;
cout << Lisa.getEdad() << endl;
cout << Goku.getSexo()<< endl;
cout << Goku.getEdad() << endl;
cout << Eli.getSexo()<< endl;
cout << Eli.getEdad()<< endl;


system("pause");
	return 0;
}



