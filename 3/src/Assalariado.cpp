#include "Assalariado.h"

Assalariado::Assalariado(const string &nome, int id, double salario) : Funcionario(nome, id), salario(salario) {}

double Assalariado::calculaSalario() {
    return salario;
}
