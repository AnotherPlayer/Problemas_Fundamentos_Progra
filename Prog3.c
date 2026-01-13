// Calcular la distancia entre 2 puntos

#include <stdio.h>
#include <math.h>

int main(){

    double x1, x2, y1, y2, distancia;
    double x,y;
    printf("Ingresa el valor de x1: ");
    scanf("%lf", &x1);
    printf("Ingresa el valor de x2: ");
    scanf("%lf", &x2);
    printf("Ingresa el valor de y1: ");
    scanf("%lf", &y1);
    printf("Ingresa el valor de y2: ");
    scanf("%lf", &y2);

    x = x2 - x1;
    y = y2 - y1;

    x = x*x;
    y = y*y;
   
    distancia = x + y;
    distancia = sqrt(distancia);

    printf("La distancia entre los puntos es: %lf\n", distancia);

}