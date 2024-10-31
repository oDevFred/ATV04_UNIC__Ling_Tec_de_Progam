/* Escreva um programa que, dado o raio de um círculo, calcule sua área e o perímetro. A área é a superfície do objeto,  dada por A = πt^2, e o perímetro é a medida do contorno do objeto dado por P = 2πr^2. Dica: utilize as funções intrínsecas vistas nesta unidade. */

#include <stdio.h>
#include <math.h> // Para usar a função pow()

#define PI 3.14159265358979323846 // Definindo a constante π

int main() {
    double raio, area, perimetro;

    // Solicita ao usuário que digite o raio do círculo
    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    // Calcula a área do círculo
    area = PI * pow(raio, 2); // A = πr²

    // Calcula o perímetro do círculo
    perimetro = 2 * PI * raio; // P = 2πr

    // Exibe os resultados
    printf("Area do circulo: %.2f\n", area);
    printf("Perimetro do circulo: %.2f\n", perimetro);

    return 0;
}