#include "calculos.h"

float calcularCapitalPorAño(float capitalRestante, int tiempo) {
    return capitalRestante / tiempo;
}

float calcularInteresPorAño(float capitalRestante, float tasaInteresAnual) {
    return capitalRestante * (tasaInteresAnual / 100);
}

float calcularCapitalConInteres(float capitalPorAño, float interesPorAño) {
    return capitalPorAño + interesPorAño;
}

float calcularCuotaMensual(float capitalConInteres) {
    return capitalConInteres / 12;
}
