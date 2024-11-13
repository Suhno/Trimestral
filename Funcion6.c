#include <stdio.h>

int contarCaracteres(const char *cadena) {
    int contador = 0;
    while (cadena[contador] != '\0') {
        contador++;
    }
    return contador;
}

int main() {
    printf("La longitud es: %d\n", contarCaracteres("Hola"));
    return 0;
}
