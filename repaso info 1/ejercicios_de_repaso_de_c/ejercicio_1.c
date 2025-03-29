#include <stdio.h>

int main(void)
{
    int aux,cant;
    float total;
    printf("Ingrese la cantidad de numeros a promediar: ");
    scanf("%d",&cant);
    for(int i=0;i<cant;i++)
    {
        printf("Ingrese el entero %d:",i+1);
        scanf("%d",&aux);
        total+=aux;
    }
    printf("El promedio es:%f\n",total/cant);
    return 0;
}
