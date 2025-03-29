#include <stdio.h>         
                           
int main(void)             
{
    int aux,i=0;
    float total;
    do
    {
       
        printf("Ingrese el entero %d: ",i+1);
        scanf("%d",&aux);
        if(aux!=0)
        {
            total+=aux;
            i++;
        }
    }while(aux!=0);
    printf("El promedio es: %f",total/i);
    return 0;
}
           
