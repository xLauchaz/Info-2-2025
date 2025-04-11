#include <stdio.h>
#include <math.h>
struct Punto
{
    float x;
    float y;
};
float distancia(struct Punto p1,struct Punto p2);
int main(int argc, char *argv[])
{
    struct Punto p1={1.0,2.0},p2={3.0,4.0};
    struct Punto p3={2.0,3.0},p4={3.0,2.0};
    struct Punto p5={-1.0,-1.0},p6={2.0,2.0};

    printf("La distancia entre (%g,%g) y (%g,%g) es %g\n",p1.x,p1.y,p2.x,p2.y,distancia(p1,p2));
    printf("La distancia entre (%g,%g) y (%g,%g) es %g\n",p3.x,p3.y,p4.x,p4.y,distancia(p3,p4));
    printf("La distancia entre (%g,%g) y (%g,%g) es %g\n",p5.x,p5.y,p6.x,p6.y,distancia(p5,p6));
    return 0;
}
float distancia(struct Punto p1, struct Punto p2)
{
    return sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
}


