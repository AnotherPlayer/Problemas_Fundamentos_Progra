//Menu para hacer calcular 4 área diferentes (cuadrado, rectangulo, triangulo y circulo).

//Pedir que área calcular
//Pedir datos para calcular el área
//Calcular el área
//Imprimir el área

#include <stdio.h>

void aCuadrado(){

    float lado, area;
    printf("Ingrese el lado del cuadrado: ");
    scanf("%f", &lado);
    area = lado * lado;

}

int main(){

    aCuadrado();

}