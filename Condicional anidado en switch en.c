#include <stdio.h>
int main() {
    int opcion = 2;
    switch (opcion) {
        case 1:
            printf("Opción 1\n");
            break;
        case 2:
            printf("Opción 2\n");
            int subopcion = 1;
            switch (subopcion) {
                case 1:
                    printf("Subopción 1 dentro de Opción 2\n");
                    break;
            }
            break;
    }
    return 0;
}
