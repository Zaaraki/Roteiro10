
#include <iostream>
#include "Horista.h"

Horista::Horista(const string &nome, int id, double salarioPorHora, double horasTrabalhadas) :
        Funcionario(nome, id), salarioPorHora(salarioPorHora), horasTrabalhadas(horasTrabalhadas) {}

double Horista::calculaSalario() {
    double salarioNormal = salarioPorHora * HORA_REGULAR;

    if (horasTrabalhadas <= HORA_REGULAR) {
        return salarioNormal;
    } else {
        double extra = horasTrabalhadas - HORA_REGULAR;
        double pagamentoExtra = salarioPorHora * extra * BONUS_EXTRA / 100;
        return salarioNormal + pagamentoExtra;
    }
}
