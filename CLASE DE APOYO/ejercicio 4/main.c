#include <stdio.h>
#include <stdlib.h>

// ingresar edades (parar el ingreso cuando quiera), y sacar el promedio.-


int main()

{
    int i=0;
    int edad;
    float promedio;
    float acumulador;
    int continuar=1;

    do
        {
            printf("ingrese su edad : ");
            scanf("%d",&edad);
            printf(" su edad es de : %d\n",edad);
            acumulador=acumulador+edad;
            i++;
            printf("desea continuar? (1/0) :");
            scanf("%d",&continuar);
            //continuar = 1 o 0?;
        }while(continuar);

            promedio=acumulador/i;

            printf("el promedio  : %.2f", promedio);

            return 0;


}
