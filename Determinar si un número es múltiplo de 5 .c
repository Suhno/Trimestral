#include <stdio.h>

int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero % 5 == 0) {
        printf("El número es múltiplo de 5.\n");
    } else {
        printf("El número no es múltiplo de 5.\n");
    }

    return 0;
}
