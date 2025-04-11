#include <stdio.h>
#include <math.h>
struct Ecuacion
{
    double a;
    double b;
    double c;
};
void bashkara(struct Ecuacion c1);
int main(int argc, char *argv[])
{
    struct Ecuacion cuadratica1;
    printf("Ingrese la ecuacion cuadratica separada por espacios:\n");
    scanf("%lf %lf %lf",&cuadratica1.a,&cuadratica1.b,&cuadratica1.c);
    return 0;
}
void bashkara(struct Ecuacion c1)
{
    double discriminante, raiz1;
    discriminante=c1.b*c1.b-4*c1.a*c1.c;
    if(discriminante>0)
    {
        raiz1=(-c1.b+sqrt(discriminante))/(2*c1.a);
    }
    printf("Una raiz es %lf\n",raiz1);
}
