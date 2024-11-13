#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Ingresa el valor de a: ");
    scanf("%d", &a);
    printf("Ingresa el valor de b: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("Después del intercambio, a es: %d y b es: %d\n", a, b);
    return 0;
}
