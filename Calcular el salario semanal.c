#include <stdio.h>
int main() {
    float horas, pago_hora, salario;
    printf("Ingresa el número de horas trabajadas: ");
    scanf("%f", &horas);
    printf("Ingresa el pago por hora: ");
    scanf("%f", &pago_hora);
    salario = horas * pago_hora;
    printf("El salario semanal es: %.2f\n", salario);
    return 0;
}
