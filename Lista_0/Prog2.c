//Realizar un programa que calcule el área de un rectnagulo.
//Fórmula: Area = Base * Altura
#include <stdio.h>

int main(){

    //Inicio código
    float base, altura, area;
    printf("Ingrese la base del rectángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del rectángulo: ");
    scanf("%f", &altura);
    area = base * altura;
    printf("El área del rectángulo es: %f\n", area);

    return 0;

}