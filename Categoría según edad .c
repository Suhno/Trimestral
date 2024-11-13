#include <stdio.h>

int main() {
    int edad;
    printf("Ingrese la edad: ");
    scanf("%d", &edad);

    if (edad < 12) {
        printf("Categoría: Niño\n");
    } else if (edad >= 12 && edad <= 17) {
        printf("Categoría: Adolescente\n");
    } else if (edad >= 18 && edad <= 64) {
        printf("Categoría: Adulto\n");
    } else {
        printf("Categoría: Mayor\n");
    }

    return 0;
}
