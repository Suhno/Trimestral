#include <stdio.h>

int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    printf("2^3 = %d\n", potencia(2, 3));
    return 0;
}
