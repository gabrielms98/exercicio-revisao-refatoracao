#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	public:
    double pagamentoMes(double horasTrabalhadas);

    double getQuotaMensalVendas() { return quotaMensalVendas; }
    double getSalarioHora() { return salarioHora; }

    void setQuotaMensalVendas(double);
    void setSalarioHora(double);
  
  private:
    double salarioHora;  
    double quotaMensalVendas;  
	
};

#endif