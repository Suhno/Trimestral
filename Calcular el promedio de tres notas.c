#include <stdio.h>
int main() {
    float nota1, nota2, nota3, promedio;
    printf("Ingresa la primera nota: ");
    scanf("%f", &nota1);
    printf("Ingresa la segunda nota: ");
    scanf("%f", &nota2);
    printf("Ingresa la tercera nota: ");
    scanf("%f", &nota3);
    promedio = (nota1 + nota2 + nota3) / 3;
    printf("El promedio es: %.2f\n", promedio);
    return 0;
}
