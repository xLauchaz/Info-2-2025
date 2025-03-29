#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    int aleatorio, intento;
    srand(time(NULL));
    aleatorio = rand() %10;
    printf("Adivine el numero en juego: ");
    scanf("%d",&intento);

    if(intento == aleatorio)
    {
        printf("Correcto, %d es el nro, en juego\n",aleatorio);
    }
    else
    {
        printf("Incorrecto\n");
        if(intento > aleatorio)
        {
            printf("Demasiado alto, el numero era %d\n",aleatorio);
        }
        else
        {
            printf("Demasiado bajo, el numero era %d\n",aleatorio);
        }
    }
getchar();
    return 0;
}

