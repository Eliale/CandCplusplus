#include <stdlib.h>// Libreria para pausa del sistema
#include <stdio.h>
#include <Math.h>

int CuboxValor(int numero);
void CuboxReferencia(int *ptrNumero);


int main(int arMatrixc, char const *arMatrixv[])
{
int numero=2;

printf("Cubo por valor: \t %d\n",CuboxValor(numero));

CuboxReferencia(&numero); // Desrefenrencia
printf("Cubo por Apuntadores (Referencia)\t%d  \n", numero);



CuboxReferencia(&numero); // Desrefenrencia
printf("Cubo por Apuntadores (Referencia)\t%d  \n", numero);

	system("pause");
	return 0;
}

int CuboxValor(int numero){
	return pow(numero,3);
}

void CuboxReferencia(int *ptrNumero){
*ptrNumero=pow(*ptrNumero,3);

}



