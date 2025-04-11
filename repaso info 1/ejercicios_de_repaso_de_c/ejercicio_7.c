#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double a,b,c,discriminante,raiz1,raiz2,parter,parteim;

    //le pedimos los valores
    printf("Ingrese los coeficientes (a,b,c) separados pir espacios: ");
    scanf("%lf %lf %lf",&a,&b,&c);

    //verificamos que sea un polinomio de segundo grado
    if(a==0)
    {
        printf("No es una ecuación cuadrática\n");
        return  1;
    }
    
    //calculamos el discriminante
    discriminante = b*b-4*a*c;
    
    if(discriminante > 0)
    {
        raiz1 = (-b + sqrt(discriminante))/(2*a);
        raiz2 = (-b - sqrt(discriminante))/(2*a);
        printf("Solucion: raices reales distintas (RRD)\n%.3f\n%.3f\n",raiz1,raiz2);
    }else if (discriminante==0) {
        raiz1 = -b/(2*a);
        printf("Solucion: raices iguales (RI)\n%.3f\n",raiz1);
    }
    else {
        parter = -b /(2*a);
        parteim = sqrt(-discriminante)/(2*a);
        printf("Solucion: complejos conjugados (RCC)\n%.3f + %3f i\n%3f - %3f i",parter,parteim,parter,parteim);
    }    
    return 0;
}
