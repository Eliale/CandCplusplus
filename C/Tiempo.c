#include <stdio.h>
#include <sys/types.h>
#include <time.h>
#include <stdlib.h>

int CalculaTiempoTranscurrido(time_t inicio,time_t final);



int main(int arMatrixc, char const *arMatrixv[])
{
     time_t t1,t2;

    (void) time(&t1);

     for (int i = 0; i < 458868765; ++i)
     {
     	/* code */
     }

    (void)time(&t2);


	printf("%s %d \n", "Tiempo Trancurrido: ",CalculaTiempoTranscurrido(t1,t2));
	system("pause");
	return 0;
}

int CalculaTiempoTranscurrido(time_t inicio,time_t final){
return ((int) final-inicio); 

}
