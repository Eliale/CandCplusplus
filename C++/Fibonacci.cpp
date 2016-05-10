#include <iostream>

#include<conio.h>

using namespace std;

int f(int o){

	int s,a=0,b=1,c=1;

	while(c<=o){

		s=a+b;

		a=b;

		b=s;

		c++;

	}

	return s;

}

int main(){

	int s,o;

	cout<<"Posicion: ";cin>>o;

	s=f(o);

	cout<<"La serie va en :"<<s<<endl;

	cout<<"    Presione una tecla para salir";

	getch();

}
