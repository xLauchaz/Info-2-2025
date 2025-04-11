#include <stdio.h>
#include <math.h> // funciones pow y sqrt

double distancia(double,double,double,double);

int main(void)
{
  printf("La distancia entre (%g,%g) y (%g,%g) es %g\n", 
      1.0, 2.0, 3.0, 4.0, distancia(1.0, 2.0, 3.0, 4.0));
  printf("La distancia entre (%g,%g) y (%g,%g) es %g\n", 
      2.0, 3.0, 3.0, 2.0, distancia(2.0, 3.0, 3.0, 2.0));
  printf("La distancia entre (%g,%g) y (%g,%g) es %g\n", 
      -1.0, -1.0, 2.0, 2.0, distancia(-1.0, -1.0, 2.0, 2.0));
  return 0;
}

double distancia(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

