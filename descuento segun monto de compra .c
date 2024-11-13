#include <stdio.h>

int main() {
    float monto, descuento;
    printf("Ingrese el monto de compra: ");
    scanf("%f", &monto);

    if (monto > 100) {
        descuento = monto * 0.10;
    } else {
        descuento = monto * 0.05;
    }

    printf("Descuento: %.2f\n", descuento);
    return 0;
}
