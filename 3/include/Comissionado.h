#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionario.h"

class Comissionado: public Funcionario {

private:
    double salarioBase;
    double vendasSemanais;
    double percentualComissao;

public:
    Comissionado(const string &nome, int id, double salarioBase, double vendasSemanais, double percentualComissao);

    double calculaSalario() override;
};

#endif // COMISSIONADO_H
