#include <stdio.h>
#include <math.h> // Para pow y sqrt

/* Prototipo de la función */
float distancia(float p1[], float p2[]);

int main(void)
{
    float puntos[][2] = {
        {1.0, 2.0}, {3.0, 4.0},
        {2.0, 3.0}, {3.0, 2.0},
        {-1.0, -1.0}, {2.0, 2.0}
    };

    int total_pares = sizeof(puntos) / (2 * sizeof(puntos[0]));

    for (int i = 0; i < total_pares; i++) {
        printf("La distancia entre (%g,%g) y (%g,%g) es %g\n",
               puntos[2 * i][0], puntos[2 * i][1],
               puntos[2 * i + 1][0], puntos[2 * i + 1][1],
               distancia(puntos[2 * i], puntos[2 * i + 1]));
    }

    return 0;
}

/* Implementación de la función */
float distancia(float p1[], float p2[])
{
    return sqrt(pow(p2[0] - p1[0], 2) + pow(p2[1] - p1[1], 2));
}

