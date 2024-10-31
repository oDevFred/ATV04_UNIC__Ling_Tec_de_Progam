#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846 // Definindo a constante π

int main() {
    double raio, area, perimetro;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    area = PI * pow(raio, 2);

    perimetro = 2 * PI * raio;

    printf("Area do circulo: %.2f\n", area);
    printf("Perimetro do circulo: %.2f\n", perimetro);

    return 0;
}
