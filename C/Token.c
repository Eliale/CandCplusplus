#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void Lee();

int main(int argc, char const *argv[])
{

Lee();



    system("pause");
	return 0;
}

void Lee(){
	//char string[] = "a string,of ,,tokens";
char *token;

FILE *archivo;
char linea[10];
archivo = fopen ("coordenadas.txt", "r" );  
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
              //  printf("Coordenada:  %s\n", token);
        	if (cont%2!=0)
        	{
        		  x=atoi(token);
                printf("Coordenada x:  %d\n", x);
        	}else{
        		  y=atoi(token);
                printf("Coordenada y:  %d\n", y);
        	}
               

                token = strtok(NULL,",");
        }
         


 		//printf("%s",linea);
 	}
		}
		fclose(archivo);




}
      
