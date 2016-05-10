#include <iostream>
#include <stdlib.h>


using namespace std;

 int main() {
	

   
    int operacion1=5+5;
   int operacion2=15-5;
    int operacion3=2*5;
    if (operacion1==operacion3){
        operacion2=operacion2*2;
    	cout<< operacion2<<endl;
    } 
else{
    operacion3=operacion1-operacion2;

	cout << operacion3 << endl;
}




system ("pause");

	return 0;
}