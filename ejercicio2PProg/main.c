#include <stdio.h>
#include <stdlib.h>

int main()
{

    return 0;
}

int contarCaracteres(char cadena[], char caracterA, char caracterB,)
{
    int contadorCaracter = 0;


    for(int i=0; i< strlen(cadena); i++)
    {
        if(cadena[i] == caracterA)
        {
            cadena[i]==caracterA;

            strcpy(cadena[i]=caracterA);
        }

        if(cadena[i] == caracterB)
        {
            contadorCaracter++;
        }
    }

    return contadorCaracter;
}
