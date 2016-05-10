#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void TablasMultiplicar(int limite);
int Sumatoria(int limite);

int main(){
	int num=200;
	//cout <<"Ingrese Limite"<< endl;
	//cin>>num;
TablasMultiplicar(num);
//cout<<"Sumatoria: "	<<Sumatoria(num) << endl;


system("pause");
//cin.get();
	return 0;
	
}

void TablasMultiplicar(int limite){

for (int i = 1; i <=limite; i++) {
	for (int j = 1; j <=10; j++){
		
		cout << i << " x " << j << " = "<<i*j<<endl;
	}
}

}

int Sumatoria(int limite){
int suma=1;

for (int aux = 1; aux <limite; aux++)
{
	suma+=aux+1;
}
return suma;
}

