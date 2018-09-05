#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion, fac;
    float numeroUno=0, numeroDos=0, resultadoSuma,resultadoResta, resultadoMultiplicacion, resultadoDivision=0, resultadoFact;

    do
    {
        printf("\n\n1. Ingrese el primer operando (A=x): %2.f\n", numeroUno);
        printf("2. Ingrese segundo operando (B=x): %2.f\n", numeroDos);
        printf("3. Calcular todo\n");
        printf("4. Mostrar todos los resultados\n");
        printf("5. Salir\n");
        printf("\nIngrese una opcion del menu: ");
        fflush(stdin);
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Ingrese primer operando: ");
            fflush(stdin);
            scanf("%f", &numeroUno);
            break;
        case 2:
            printf("Ingrese segundo operando: ");
            fflush(stdin);
            scanf("%f", &numeroDos);
            break;
        case 3:
            resultadoSuma=suma(numeroUno, numeroDos);
            resultadoResta=resta(numeroUno, numeroDos);
            resultadoMultiplicacion = multi(numeroUno, numeroDos);

            break;
        case 4:
            printf("Resultado de la suma es:  %2.f\n", resultadoSuma);
            printf("El resultado de la resta es: %2.f\n", resultadoResta);
            printf("El resultado de la multiplicacion es: %2.f\n", resultadoMultiplicacion);
            if (numeroDos==0)
            {
                printf("%c No es posible dividir por 0(cero)\n",resultadoDivision);
            }
            else
            {
                printf("El resultado de la division es: %2.f\n", resultadoDivision);
            }
            if(resultadoFact ==1)
            {
                printf("No se pudo calcular el factorial. Por favor introduzca un numero entero positivo\n");
            }
            printf("El resultado del factorial es: %2.f\n", resultadoFact);
            break;
        case 5:
            printf("Finalizando");
            seguir= 'n';
            break;
        default:
            printf("Ingrese una opcion valida\n");
        }

        fflush(stdin);
        printf("Aprete enter para continuar");
        getchar();
        system("cls");
    }
    while(seguir=='s');

    return 0;
}
