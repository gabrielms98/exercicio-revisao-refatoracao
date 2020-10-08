#include "Vendedor.hpp"
#include <iostream>
#include <string>

double Vendedor::quotaTotalAnual() { 
	return getQuotaMensalVendas() * 12;
}

void Vendedor::setNome(std::string _nome) {
	nome = _nome;
}
