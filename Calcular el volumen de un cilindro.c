#include <stdio.h>
int main() {
    float radio, altura, volumen;
    const float PI = 3.1416;
    printf("Ingresa el radio del cilindro: ");
    scanf("%f", &radio);
    printf("Ingresa la altura del cilindro: ");
    scanf("%f", &altura);
    volumen = PI * (radio * radio) * altura;
    printf("El volumen del cilindro es: %.2f\n", volumen);
    return 0;
}
