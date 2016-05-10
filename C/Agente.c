#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
  
typedef struct 
{
	int Matrix[11][11];
	int num_ciudades;
} Datos;
 
int MatrizAdyacencia[11][11]={
	{0,4,6,3,0,0,0,0,0,0,0},
	{4,0,10,0,8,7,0,0,0,0,0},
	{6,10,0,10,5,4,5,0,0,0,0},
	{3,0,10,0,0,4,3,0,0,0,0},
	{0,8,5,0,0,0,0,7,8,0,0},
	{0,7,4,4,0,0,0,4,6,8,0},
	{0,0,5,3,0,0,0,0,5,5,0},
	{0,0,0,0,7,4,0,0,10,0,5},
	{0,0,0,0,8,6,5,10,0,10,4},
	{0,0,0,0,0,8,5,0,10,0,6},
	{0,0,0,0,0,0,0,5,4,6,0}
}; 


void CargaMatrizAdyacencia (Datos *);
void Principal (Datos *,int [11][2]);
int  BuscarEnFila (Datos *,int, int[11][2]);
void GuardarCiudad (int [11][2], int cd);
void GuardarValor (int [11][2], int cd );
void CiudadesPasadas (Datos *, int [11][2], int indice_del_menor, bool penultimo);
void ImprimirRuta (int [11][2], int n);
int  TotalKilometraje(int [11][2], int nCaminos);


 

 
int main(int argc, char const *argv[])
{
	
	int ruta[11][2]= {0};
	Datos datos = {0,0};
	datos.num_ciudades=11;
	CargaMatrizAdyacencia(&datos);
	Principal(&datos, ruta);
	ImprimirRuta(ruta, datos.num_ciudades);
	system("pause");
	return 0;
	return 0;
}
 


 
void CargaMatrizAdyacencia(Datos *datos)
{
	
 	for (int i = 0; i < (datos -> num_ciudades); i++)
	{
	    datos -> Matrix[i][i] = 0;
 
	    for (int j = i + 1; j < (datos -> num_ciudades); j++)
	    {	
    		
     		datos->Matrix[i][j]=MatrizAdyacencia[i][j];
 
     		datos -> Matrix[j][i] = datos -> Matrix[i][j];
	    }
    }

}
 
void Principal(Datos *datos, int r[20][2])
{
	int i, inicio, indice_del_menor;
	do
	{
		
		printf("Digite ciudad de inicio: (1 - 11) ");
		scanf("%d", &inicio);
		
	}while(inicio < 1 || inicio > 11);
 
	r[0][0] = inicio;
 
	inicio--;	
 
	for (i = 0; i < (datos -> num_ciudades); i++)
	{			
		if(i == 0)
		{
			indice_del_menor = BuscarEnFila(datos, inicio, r);
			CiudadesPasadas(datos, r, indice_del_menor, false);
		}
		else
			{
				if (i == (datos -> num_ciudades) - 2)
				{
					indice_del_menor = BuscarEnFila(datos, indice_del_menor, r);
					CiudadesPasadas(datos, r, indice_del_menor, true);
				}
				else
				{
					indice_del_menor = BuscarEnFila(datos, indice_del_menor, r);
					CiudadesPasadas(datos, r, indice_del_menor, false);
				}
			}		
	}
}
 
 void CiudadesPasadas(Datos *datos, int r[20][2], int indice_del_menor, bool penultimo)
{
	
 
	int i = 0;
	int num_ciudades_visitadas = 0;
	int aux;
 
	while(r[i][1] != 0)
	{
		i++;
		num_ciudades_visitadas++;
	}
 
	if (penultimo == true)
	{
		for (i = num_ciudades_visitadas; i >= 1; i--)
		{
			aux = r[i][0];
			aux = aux - 1;
			datos -> Matrix[indice_del_menor][aux] = 0;
		}
	}
	else
	{
		for (i = num_ciudades_visitadas; i >= 0; i--)
		{
			aux = r[i][0];
			aux = aux - 1;
			datos -> Matrix[indice_del_menor][aux] = 0;
		}
	}
}

int BuscarEnFila(Datos *datos, int inicio, int r[20][2])
{
	int menor = 999999; 
	int indice_del_menor;
 
	for (int j = 0; j < (datos -> num_ciudades); j++)
	{
		if ( (datos -> Matrix[inicio][j]) != 0 )
		{
			if ( (datos -> Matrix[inicio][j]) < menor )
			{
				menor =	 datos -> Matrix[inicio][j];
				indice_del_menor = j;
			}
		}
	}	
 
	GuardarCiudad(r ,indice_del_menor);
	GuardarValor(r, menor);
 
	return indice_del_menor;
}
 
void GuardarCiudad(int r[20][2] , int indice_del_menor)
{
	int i, num_ciudades_visitadas;
 
	i= 0;
	num_ciudades_visitadas = 0;
 
	while(r[i][0] != 0)
	{
		i++;
		num_ciudades_visitadas++;
	}
 
	r[num_ciudades_visitadas][0] = indice_del_menor + 1;
}
 
void GuardarValor(int r[20][2], int menor)
{
	
 
	int i=0;
	int num_ciudades_visitadas = 0;
 
	while(r[i][1] != 0)
	{
		i++;
		num_ciudades_visitadas ++;
	}
 
	r[num_ciudades_visitadas][1] = menor;
}
 


int TotalKilometraje(int r[20][2], int nCaminos)
{
	int total=0;
 
	for (int i = 0; i < nCaminos; i++){
 
		total += r[i][1];
	}
	if (total> 1000)
	{
		printf("%s\n","Camino no encontrado" );
		system("pause");
	}
 
	return total;
}
 
void ImprimirRuta(int ruta[20][2], int n)
{
	int i, total;
 
	total = TotalKilometraje(ruta, n);
 
	printf("\nCamino corto: ");
 
	for (i = 0; i < n + 1; i++)
	{
		if (i == n)
 
			printf(" %d\n", ruta[i][0]);
 
		else
 
			printf(" %d =>", ruta[i][0]);		
	}
 
	printf("\nKilometraje:");
 
	for (i = 0; i < n; i++)
	{
		if (i == n-1)
 
			printf(" %d = %d\n\n", ruta[i][1],total);
 
		else	
 
			printf(" %d +", ruta[i][1]);	
	}
 
	getchar();
}
 

 
