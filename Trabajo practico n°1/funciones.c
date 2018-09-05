
#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float suma (float A,float B)
{
    float resultadoSuma;

    resultadoSuma=A+B;

    return resultadoSuma;
}
float resta (float A, float B)
{
    float resultadoResta;
    resultadoResta= A-B;
    return resultadoResta;
}
float multi (float a, float b)
{
    float resultadoMultiplicacion;

    resultadoMultiplicacion = a*b;

    return resultadoMultiplicacion;
}
float division (float a, float b)
{
    float resultadoDivision;
    if (b==0)
    {
        printf("NO se puede dividir por 0 (cero)\n");
    }

    resultadoDivision = a/b;

    return resultadoDivision;
}
int validarFactorial (int a)
{
    int retorno = 0;
    if (a<0)
    {
        retorno =1;
    }
    else
    {
        factorial (a);
    }
    return retorno;
}
int factorial (int numero);
{
    int a;
    int fac =1;
    for (a=1; a<numero; a=a+1)
    {
        fac = fac + a;
    }
    return fac;
}
