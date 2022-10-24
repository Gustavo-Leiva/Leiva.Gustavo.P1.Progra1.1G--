#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3



typedef struct
{
    int id;
    char nombre[20];
    char tipo;
    float efectividad;


} eVacuna;


int ordenarTipoEfectividad(eVacuna vec[], int tam);

int main()
{

    eVacuna vacunas[TAM] =
    {
        {1000, "pedro", 'a', 99.65},
        {1001, "ana",  'j', 33.83},
        {1001, "luis", 'c', 77.83}
    };


    ordenarTipoEfectividad(vacunas, TAM);

    for(int i=0; i<TAM; i++)
    {
        printf("%d      %s      %c      %f\n", vacunas[i].id, vacunas[i].nombre, vacunas[i].tipo, vacunas[i].efectividad);
    }


    return 0;
}


int ordenarTipoEfectividad(eVacuna vec[], int tam)
{
    int todoOk = 0;

    eVacuna auxVacuna;

    if( vec != NULL && tam > 0)
    {
        for(int i=0; i < tam - 1; i++)
        {
            for(int j= i+1; j < tam; j++)
            {
                if((strcmp(vec[i].tipo,vec[j].tipo) > 0)
                        ||((strcmp(vec[i].tipo,vec[j].tipo) == 0) && (vec[i].efectividad != vec[j].efectividad) && (vec[i].efectividad > vec[j].efectividad)))
                {
                    auxVacuna = vec[i];
                    vec[i] = vec[j];
                    vec[j] = auxVacuna;
                }
            }
        }
    }

    return todoOk = 1;
}
