#ifndef CALCULOS_H
#define CALCULOS_H

float calcularCapitalPorAño(float capitalRestante, int tiempo);
float calcularInteresPorAño(float capitalRestante, float tasaInteresAnual);
float calcularCapitalConInteres(float capitalPorAño, float interesPorAño);
float calcularCuotaMensual(float capitalConInteres);

#endif
