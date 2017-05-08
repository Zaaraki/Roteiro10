#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"

const static float HORA_REGULAR = 40.0f;
const static float BONUS_EXTRA = 50.0f;

class Horista : public Funcionario {

private:
    double salarioPorHora;
    double horasTrabalhadas;

public:

    Horista(const string &nome, int id, double salarioPorHora, double horasTrabalhadas);

    double calculaSalario() override;
};

#endif // HORISTA_H
