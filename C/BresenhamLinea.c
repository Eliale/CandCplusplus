#include <stdio.h>
#include <stdlib.h>


int tamanio = 75;
char pantalla[75][75];

void Imprime();

void LineaBresenham(int x1, int y1, int x2, int y2);

int main(){
	
    int i,j;
	for ( i = 0; i <= tamanio; i++){

		for ( j = 0; j <= tamanio; j++){

			pantalla[i][j] = '.';

		}
	}
	
	int x1;
	int y1;
	int x2;
	int y2;
   
    printf("%s\n\n\a","Ingrese Coordenadas entre 0 y 75");
	printf("%s\n", "Ingresa x1 ");
    scanf("%d",&x1);

    printf("%s\n", "Ingresa y1 ");
    scanf("%d",&y1);
	
	printf("%s\n", "Ingresa x2 ");
    scanf("%d",&x2);

	printf("%s\n", "Ingresa y2 ");
    scanf("%d",&y2);

	if (x1<0 || x1 > 75 || x2 <0 || x2 >75 || y1<0 || y1> 75 || y2 <0 || y2>75){	
		printf("%s\n","Ingrese Coordenadas entre 0 y 75");
	}
	else{
		LineaBresenham(x1, y1, x2, y2);
		Imprime();
	}
	return 0;
}

void LineaBresenham(int x1, int y1, int x2, int y2){
	int pasoy;
	int pasox;
	int deltaX = (x2 - x1);
	int deltaY = (y2 - y1);

	if (deltaY < 0) {
		deltaY = -deltaY;
		pasoy = -1;

	}
	else {
		pasoy = 1;
	}

	if (deltaX < 0) {
		deltaX = -deltaX;
		pasox = -1;
	}
	else {
		pasox = 1;
	}

	int x = x1;
	int y = y1;
	pantalla[x][y] = 'I';

	if (deltaX>deltaY){
		int p = 2 * deltaY - deltaX;
		int incE = 2 * deltaY;
		int incNE = 2 * (deltaY - deltaX);
		while (x != x2){
			x = x + pasox;
			if (p < 0){
				p = p + incE;
			}
			else {
				y = y + pasoy;
				p = p + incNE;
			}
			pantalla[x][y] = '*';
		}
	}
	else{
		int p = 2 * deltaX - deltaY;
		int incE = 2 * deltaX;
		int incNE = 2 * (deltaX - deltaY);
		while (y != y2){
			y = y + pasoy;
			if (p < 0){
				p = p + incE;
			}
			else {
				x = x + pasox;
				p = p + incNE;
			}
			pantalla[x][y] = '*';
		}
	}

}



void Imprime(){
	int i,j;
	for ( i = 0; i <= tamanio; i++){

		for ( j = 0; j <= tamanio; j++){

			printf("%c", pantalla[j][i]);
		}
		printf("%s\n", "");
	}
	system("pause");
}
