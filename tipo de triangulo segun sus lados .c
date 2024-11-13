#include <stdio.h>

int main() {
    int a, b, c;
    printf("Ingrese los tres lados del triángulo: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("Es un triángulo equilátero.\n");
    } else if (a == b || b == c || a == c) {
        printf("Es un triángulo isósceles.\n");
    } else {
        printf("Es un triángulo escaleno.\n");
    }

    return 0;
}
