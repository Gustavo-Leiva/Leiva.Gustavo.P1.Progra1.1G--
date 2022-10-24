#include <stdio.h>
#include <stdlib.h>

/*
1. Crear una función llamada aplicarAumento que reciba como parámetro el precio de un producto y
devuelva el valor del producto con un aumento del 5%. Realizar la llamada desde el main.
*/


int aplicarAumento (float precio);

int main()
{

    float precio = 1500;
    float resultado;

    resultado = aplicarAumento(precio);
    printf("%.2f",resultado);

    return 0;
}

int aplicarAumento (float precio)
{
    float aumento = 5;
    float resultado;


    resultado = precio + ((precio * aumento)/100);

    return resultado;


}
