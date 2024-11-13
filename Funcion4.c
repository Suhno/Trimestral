#include <stdio.h>

int esPar(int n) {
    return (n % 2 == 0);
}

int main() {
    if (esPar(4)) {
        printf("Es par\n");
    } else {
        printf("Es impar\n");
    }
    return 0;
}
