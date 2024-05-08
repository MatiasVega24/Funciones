#include <stdio.h>
#include "calculos.h"

int main() {
    float capitalRestante, tasaInteresAnual;
    int tiempo;

    printf("Ingrese el monto del crédito: ");
    scanf("%f", &capitalRestante);
    printf("Ingrese la tasa de interés anual (en porcentaje): ");
    scanf("%f", &tasaInteresAnual);
    printf("Ingrese el tiempo en años: ");
    scanf("%d", &tiempo);

    float capitalRestanteTemp = capitalRestante;
    float interesTotal = 0;

    printf("\nDetalle de pagos por año:\n");
    for (int i = 1; i <= tiempo; ++i) {
        float capitalPorAnio = calcularCapitalPorAnio(capitalRestanteTemp, tiempo - i + 1);
        float interesPorAnio = calcularInteresPorAnio(capitalRestanteTemp, tasaInteresAnual);
        float capitalConInteres = calcularCapitalConInteres(capitalPorAnio, interesPorAnio);
        float cuotaMensual = calcularCuotaMensual(capitalConInteres);

        printf("Año %d:\n", i);
        printf("  Capital a pagar: %.2f\n", capitalPorAnio);
        printf("  Interés por año: %.2f\n", interesPorAnio);
        printf("  Capital con Interés: %.2f\n", capitalConInteres);
        printf("  Cuota mensual: %.2f\n", cuotaMensual);
        
        // Actualizar el capital restante
        capitalRestanteTemp -= capitalPorAnio;
        interesTotal += interesPorAnio;
    }

    printf("\nTotal de intereses pagados: %.2f\n", interesTotal);

    return 0;
}
