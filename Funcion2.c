#include <stdio.h>

int maximo(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    printf("El máximo es: %d\n", maximo(4, 7));
    return 0;
}
