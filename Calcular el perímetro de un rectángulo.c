#include <stdio.h>
int main() {
    float largo, ancho, perimetro;
    printf("Ingresa el largo del rectángulo: ");
    scanf("%f", &largo);
    printf("Ingresa el ancho del rectángulo: ");
    scanf("%f", &ancho);
    perimetro = 2 * (largo + ancho);
    printf("El perímetro del rectángulo es: %.2f\n", perimetro);
    return 0;
}
