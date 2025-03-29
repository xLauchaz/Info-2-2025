#include <stdio.h>
double promedio(int *,int);
int main(void)
{
    short int aux;
    short int i=0;
    int total=0;
    do
    {
        printf("Ingrese el entero %hd: ",i+1);
        scanf("%hd",&aux);
        if(aux!=0)
        {
            total+=aux;
        }
        i++;
    }while(aux!=0);
    printf("el promedio es: %f",promedio(&total,i));
    return 0;
}
double promedio(int *total,int cont)
{
  return (double)(*total)/cont;
}

