#include <stdio.h>
int main() {
    float metros, centimetros;
    printf("Ingresa la longitud en metros: ");
    scanf("%f", &metros);
    centimetros = metros * 100;
    printf("La longitud en centímetros es: %.2f\n", centimetros);
    return 0;
}
