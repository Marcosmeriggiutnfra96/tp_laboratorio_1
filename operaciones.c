#include "operaciones.h"

float suma(float num1,float num2)
{

    return num1 + num2 ;

}



float resta(float num1,float num2)
{

    float total ;
    total = num1 - num2 ;

    return total ;
}



float multiplicacion(float num1,float num2)
{

    float total ;
    total = num1 * num2 ;

    return total;
}



float dividir(float num1, float num2)
{

    float total;

    total = (float)num1 / num2 ;

    return total;
}


int factorial(int num)
{
    int resultado = 1 ;
    int  i  ;

    if(num>0)
    {
        for(i=1; i<=num; i++)
        {

            resultado = resultado*i;


        }
    }
    else
    {

        printf("no se realiza el factorial de un numero menor o igual a 0");
    }

    return resultado;

}

