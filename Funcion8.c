#include <stdio.h>

int valorAbsoluto(int n) {
    return (n < 0) ? -n : n;
}

int main() {
    printf("Valor absoluto de -5 es: %d\n", valorAbsoluto(-5));
    return 0;
}
