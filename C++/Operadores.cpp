#include <iostream>// ibreria para mostrar para salida y entrada de datos en pantalla
#include <stdlib.h>// Libreria para pausa del sistema

using namespace std;

bool comprobador; // Variable Logica que comprueba
 // Variables Numericas enteras
int num1=2;
int num2=10;
int num3=5;
int num4=7;
int resultado;


int main(){
	// Operadores Basicos (Aritmeticos)
   cout <<"Operadores Aritmeticos"<< endl;
    
	cout << num1 + num2 << endl; // Uso Operador Suma
	cout << num4 - num2 << endl; // Uso Operador Resta
	cout << num2 / num1 << endl;  // Uso Operador Division
	cout << num3 * num2 << endl; // Uso Operador Multiplicar
	cout << num3 % num1 << endl; // Uso Operador Residuo o Resto o Mod

// Operadores Basicos (Asignacion)
cout <<"Operadores de Asignacion"<< endl;
resultado=100; // Uso Operador de Asignacion 
cout << resultado << endl;

resultado+=10; // Uso Operador suma y asigna (Suma a resultado 10)
cout << resultado << endl;

resultado -=100; // Uso Operador resta y asigna (Resta a resutado 100)
cout << resultado << endl;

resultado *=5; // Uso Operador multiplica y asigna (Multiplica por 5 a resultado)
cout << resultado << endl;

resultado /=10; // Uso Operador divide y asigna (Divide entre 10 a resultado)
cout << resultado << endl;

resultado %=2; // Uso Operador residuo y asigna (Obtiene el resiudo de dividir entre 2 a resultado)
cout << resultado << endl;



// Operadores de Comparacion 

cout <<"Operadores Comparacion"<< endl;
comprobador= (num1==num2); // Uso de Operador de igualdad, si son iguales devuelve true (1) si no son iguales devuelve false (0)
cout << comprobador << endl;
comprobador= (num2==num3*2);
cout << comprobador << endl;


comprobador = (num1 != num2); // Uso Operador Diferente, si son diferentes devuelve true (1) si no son diferentes devuelve false (0)
cout << comprobador << endl;
comprobador= (num2!=num3*2);
cout << comprobador << endl;


comprobador= (num1<num2); // Uso de Operador MenorQue, si el numero de la izquierda es menor que el de la derecha devuelve true(1) en caso contrario devuelve false (0)
cout << comprobador << endl;
comprobador= (10<5);
cout << comprobador << endl;
comprobador= (10<10);
cout << comprobador << endl;

comprobador= (num2>num1); // Uso de Operador MayorQue, si el numero de la izquierda es mayor que el de la derecha devuelve true(1) en caso contrario devuelve false (0)
cout << comprobador << endl;
comprobador= (10>50);
cout << comprobador << endl;
comprobador= (10>10);
cout << comprobador << endl;

comprobador= (num1<=num2); // Uso de Operador MenorIgualQue, si el numero de la izquierda es menor o igual que el de la derecha devuelve true(1) en caso contrario devuelve false (0)
cout << comprobador << endl;
comprobador= (10<=5);
cout << comprobador << endl;
comprobador= (10<=10);
cout << comprobador << endl;

comprobador= (num2>=num1); // Uso de Operador MayorIgualQue, si el numero de la izquierda es mayor o igual que el de la derecha devuelve true(1) en caso contrario devuelve false (0)
cout << comprobador << endl;
comprobador= (10>=50);
cout << comprobador << endl;
comprobador= (10>=10);
cout << comprobador << endl;


cout << "Operadores Logicos" << endl;

comprobador=(10>=10 && 20==20 && 'A'=='A'); // Uso Operador AND (&&) Y, Si se cumplen todas las condiciones regresa true (1) en caso devuelve false (0)
cout << comprobador << endl;
comprobador=(num2!=num1 && num3>num4 && true==false);
cout << comprobador << endl;


comprobador=('E'=='A'|| 5==5); // Uso Operador OR (||) O, Si se cumple al menos una condicion regresa true (1) en caso que ninguna se cumpla devuelve false (0)
cout << comprobador << endl;
comprobador=(5!=5 || num3>num4 || true==false);
cout << comprobador << endl;




system("pause");

	return 0;
}