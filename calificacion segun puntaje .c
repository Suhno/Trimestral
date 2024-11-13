#include <stdio.h>

int main() {
    int puntaje;
    printf("Ingrese el puntaje (0-100): ");
    scanf("%d", &puntaje);

    if (puntaje >= 90) {
        printf("Calificación: A\n");
    } else if (puntaje >= 80) {
        printf("Calificación: B\n");
    } else if (puntaje >= 70) {
        printf("Calificación: C\n");
    } else if (puntaje >= 60) {
        printf("Calificación: D\n");
    } else {
        printf("Calificación: F\n");
    }

    return 0;
}
