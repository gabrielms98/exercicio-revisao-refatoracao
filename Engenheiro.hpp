#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

public:
  Engenheiro() : nome(""), projetos(0) {}

  std::string getNome() const { return nome; }
  int getProjetos() const { return projetos; }

  void setNome(std::string);
  void setProjetos(int);

private:
  std::string nome;
  int projetos;
};

#endif
