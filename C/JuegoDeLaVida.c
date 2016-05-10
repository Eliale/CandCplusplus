/*

******************************************
*                                        *
* Autor: Eli Alejandro Salinas Pérez     *
* Algoritmo del juego de la vida         *
* email: elialejandros@gmail.com         *
*                                        *
* Larga vida y prosperidad               *
*                                        *
******************************************

*/


#include <stdlib.h>// Libreria para pausa del sistema
#include <stdio.h> 
#include <string.h>
#include <windows.h>// Libreria para Sleep


int filas,columnas;
char matriz [1000][1000];
char temporal[1000][1000];
int puntosX[100];
int puntosY[100];
int indiceX;
int indiceY;
int elige;


void LlenaInicio(int nColumnas,int nFilas);
void Imprime();
void Juego();
void CopiaArreglo();
void LlenaDesdeTxt(int nColumnas,int nFilas);
void PierdeTiempo();
void Lee();
void Elegir(int eleccion);


int main(int argc, char const *argv[])
{

	int numeroGeneraciones;
	int contadorGeneraciones=0;

	printf("%s\n","Ingrese Numero de Filas" );
	scanf("%d",&filas);
	filas=filas-1;
    
	printf("%s\n","Ingrese Numero de columnas" );
	scanf("%d",&columnas);
    columnas=columnas-1;

    printf("%s\n","Ingrese numero de numero de Generaciones" );
    scanf("%d",&numeroGeneraciones);

    printf("%s\n","Digite 1 para Abrir Configuracion desde coordenadas.txt \n Digite 2 para Cargar Configuracion Aleatoria " );
    scanf("%d",&elige);
    Elegir(elige);

while(contadorGeneraciones<numeroGeneraciones){
contadorGeneraciones+=1;
printf("%s\n","" );
printf("%s%d\n","Generacion: ",contadorGeneraciones);
	
Imprime();
Juego();

if(numeroGeneraciones==contadorGeneraciones){

	break;
}
system("cls");

}

  system("pause");
	return 0;
}


void Elegir(int eleccion){

if(eleccion==1){
LlenaDesdeTxt(columnas,filas);
}else if(eleccion==2){
LlenaInicio(columnas,filas);

}
else 
LlenaInicio(columnas,filas);
}


void Lee(){
/* Abre coordenadas desde archivo coordenadas.txt, el cual puede ser modificado
   siempre y cuando se siga el formato X,Y donde (X y Y son enteros positivos mayores a 0)
   y salto de linea para grabar otra coordenada. 
   ejemplo: 4,5
            6,90

*/

char *token;
FILE *archivo;
char linea[10];
archivo = fopen ("coordenadas.txt", "r" );  // Abre archivo coordenadas,txt
	if (archivo==NULL) {
		fputs ("Error",stderr); exit (1);}
		else{

while (feof(archivo) == 0)
 	{
 		fgets(linea,10,archivo);
        token = strtok(linea,","); 
        int x;
        int y;
        int cont=0;

        while (token != NULL){
        	cont+=1;
        	
        	if (cont%2!=0)
        	{

        		  x=atoi(token);
        		  puntosX[indiceX]=x-1;
        		 
                 indiceX+=1;
        	}else{
        		  y=atoi(token);
        		  puntosY[indiceY]=y-1;
        		
        		  indiceY+=1;
                
        	}

                token = strtok(NULL,",");
        }

 	}
		}
		fclose(archivo);

}


void LlenaDesdeTxt(int nColumnas,int nFilas){
	//Llena de 0
	int i,j;
	
	for ( i = 0; i <= nColumnas; i++) {
	for ( j = 0; j <= nFilas; j++) {
          matriz[i][j]='0';
         
	}
}
 Lee();
//Leer
 int k;
          for (k = 0; k < indiceY; k++)
          {         	
          	int x=puntosX[k];
          	int y=puntosY[k];        
          	matriz[x][y]='1';
   	
          }

}


void LlenaInicio(int nColumnas,int nFilas){
int i,j;
for ( i = 0; i <= nColumnas; i++) {
	for ( j = 0; j <= nFilas; j++) {
	int nAleatorio;
	nAleatorio=(1+rand() % (100-1)); // Genera numero aleatorio entre 1 y 100
	if(nAleatorio<=50){
       matriz[i][j]='1';// Llena con 1´s si nAletorio es menor a 50
	}
		else{

		matriz[i][j]='0';// Llena con 0´s
	}
}

}

}


void Imprime(){
int i,j;
 for (i = 0; i <= filas; i++)
{
	for (j = 0; j <= columnas ; j++)
	{	
		printf("%c",matriz[j][i]);
	}	
	printf("%s\n","" );
}
//PierdeTiempo();
Sleep(100);

}


void Juego(){
// Logica del juego de la vida
int x,y;
for ( x = 0; x <= columnas; x++) {
	for ( y = 0; y <= filas; y++) {
	char estado=matriz[x][y];
	int nVecinos=0;

	if (matriz[x+1][y]=='1')
	{    //Derecha
		nVecinos+=1;

	}
    if (matriz[x-1][y]=='1')
	{   //Izquierda
		nVecinos+=1;
	}
	if (matriz[x+1][y-1]=='1')
	{   //DerechaArriba
		nVecinos+=1;
	}
	if (matriz[x+1][y+1]=='1')
	{    //DerechaAbajo
		nVecinos+=1;
	}
	if (matriz[x-1][y-1]=='1')
	{   //IzquierdaArriba
		nVecinos+=1;
	}
	if (matriz[x-1][y+1]=='1')
	{   //IzquierdaAbajo
		nVecinos+=1;
	}

	if (matriz[x][y-1]=='1')
	{   //Arriba
		nVecinos+=1;
	}
	if (matriz[x][y+1]=='1'){
		//Abajo
		nVecinos+=1;
	}

	    if(nVecinos<2 || nVecinos>3){
		//Muere
	    	temporal[x][y]='0';
	}
	else
		if (nVecinos==3)
		{
			//Nace
			temporal[x][y]='1';

		}

	else{
        // Permanece igual
		temporal[x][y]=estado;
	}


}
//Fin For interior

}
//Fin For Superior
CopiaArreglo();
}// Fin Metodo


void CopiaArreglo(){
int x,y;
for ( x = 0; x <= columnas; x++) {
	for ( y = 0; y <= filas; y++) {
     
     matriz[x][y]=temporal[x][y];

	}
}


}
void PierdeTiempo(){
	int i;
	for ( i = 0; i < 500000000; ++i)
	{
		//Pierdo Tiempo xD
	}
}

