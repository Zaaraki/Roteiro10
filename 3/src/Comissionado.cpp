#include "Comissionado.h"

Comissionado::Comissionado(const string &nome, int id, double salarioBase, double vendasSemanais, double percentualComissao) :
        Funcionario(nome, id), salarioBase(salarioBase), vendasSemanais(vendasSemanais), percentualComissao(percentualComissao) {}

double Comissionado::calculaSalario() {
    return salarioBase + vendasSemanais * percentualComissao / 100;
}
