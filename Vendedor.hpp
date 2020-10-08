#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

public:

  Vendedor() : nome("") {}

  double quotaTotalAnual();

  std::string getNome() const {return nome;}

  void setNome(std::string);

private:
  std::string nome;
};

#endif