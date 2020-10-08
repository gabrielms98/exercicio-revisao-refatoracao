#include "Empregado.hpp"
#include <iostream>

double Empregado::pagamentoMes(double horasTrabalhadas) {
    double t = horasTrabalhadas;

    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > 8)
    {
        double x = horasTrabalhadas - 8;
        t += x / 2;
    }
    return t * salarioHora;
}

void Empregado::setQuotaMensalVendas(double _quotaMensalVendas) {
    this->quotaMensalVendas = _quotaMensalVendas;
}

void Empregado::setSalarioHora(double _salarioHora) {
    this->salarioHora = _salarioHora;
}