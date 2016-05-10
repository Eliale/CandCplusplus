
#include <stdlib.h>// Libreria para pausa del sistema
#include <stdio.h>


int filas,columnas;
char matrix [1000][1000];

void LlenaInicio(int nColumnas,int nFilas);
void Imprime();




int main(int arMatrixc, char const *arMatrixv[])
{

	

	//cout << "InMatrixrese Numero de Filas"<< endl;
	printf("%s\n","InMatrixrese Numero de Filas" );
	//cin >> filas;
	scanf("%d",&filas);
	filas=filas-1;
    
   // cout << "InMatrixrese numero de columnas"<< endl;
	printf("%s\n","InMatrixrese numero de columnas" );
   // cin >> columnas;
	scanf("%d",&columnas);
    columnas=columnas-1;

  
LlenaInicio(columnas,filas);

Imprime();

    system("pause");
	return 0;
}






void LlenaInicio(int nColumnas,int nFilas){

for (int i = 0; i <= nColumnas; i++) {
	for (int j = 0; j <= nFilas; j++) {
	int nAleatorio;
	nAleatorio=(1+rand() % (100-1));
	if(nAleatorio<=50){
       matrix[i][j]='1';
	}
		else{

		matrix[i][j]='0';
	}
}

}

}
void Imprime(){
 for (int i = 0; i <= filas; i++)
{
	for (int j = 0; j <= columnas ; j++)
	{
		//cout << matrix[j][i];
		printf("%c",matrix[j][i]);
	}
	printf("%s\n","" );
	
}
}

