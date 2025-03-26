#include <stdio.h>
#include <stdlib.h>
int main(void){
    int aleatorio;
    int intento;
    aleatorio = rand()%10;
    printf("Adivine el numero en juego: ");
    scanf("%d",&intento);
    if(intento==aleatorio){
        printf("correcto,%d es el nro. en juego\n",aleatorio);
    }
    else{
        printf("Incorrecto\n");
    }
    return 0;
}
