#include <stdio.h>
#include <stdlib.h>

// ingresar varias edades por for .-

int main()

{
    int i=0;

    for(i=0; i<9;i++)
    {
        printf("ingrese su edad : ");
        scanf("%d",&i);
        // el i++ no hace falta aca ya que esta entre parentesis ()

    }

    return 0;

}
