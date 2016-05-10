#include <stdlib.h>// Libreria para pausa del sistema
#include <stdio.h>

void EliMatrixeCiudad(int ciudad);
void Solucion(int inicio);
void Imprime();

int MatrizAdyacencia[11][11]={
	{0,4,6,3,-1,-1,-1,-1,-1,-1,-1},
	{4,0,10,-1,8,7,-1,-1,-1,-1,-1},
	{6,10,0,10,5,4,5,-1,-1,-1,-1},
	{3,-1,10,0,-1,4,3,-1,-1,-1,-1},
	{-1,8,5,-1,0,-1,-1,7,8,-1,-1},
	{-1,7,4,4,-1,0,-1,4,6,8,-1},
	{-1,-1,5,3,-1,-1,0,-1,5,5,-1},
	{-1,-1,-1,-1,7,4,-1,0,10,-1,5},
	{-1,-1,-1,-1,8,6,5,10,0,10,4},
	{-1,-1,-1,-1,-1,8,5,-1,10,0,6},
	{-1,-1,-1,-1,-1,-1,-1,5,4,6,0}
};

int main(int arMatrixc, char const *arMatrixv[])
{
	Imprime();
	system ("pause");
	return 0;
}

void EliMatrixeCiudad(int ciudad){

    Solucion(ciudad);


}
void Solucion(int inicio){

}
void Imprime(){

	for (int i = 0; i <11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			printf(" %d",MatrizAdyacencia[j][i] );
		}
       printf("%s\n"," " );
	}
}