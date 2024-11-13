#include <stdio.h>
int main() {
    float dolares, tipo_cambio, euros;
    printf("Ingresa la cantidad en dólares: ");
    scanf("%f", &dolares);
    printf("Ingresa el tipo de cambio (1 dólar en euros): ");
    scanf("%f", &tipo_cambio);
    euros = dolares * tipo_cambio;
    printf("La cantidad en euros es: %.2f\n", euros);
    return 0;
}
