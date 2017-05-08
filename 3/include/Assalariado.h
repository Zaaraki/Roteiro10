#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"

class Assalariado : public Funcionario {

private:
    double salario;
public:
    Assalariado(const string &nome, int id, double salario);

    double calculaSalario() override;
};


#endif // ASSALARIADO_H
