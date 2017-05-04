#include <iostream>
#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(const string &nomeCliente, float salarioMensal, const string &numeroConta, float saldo) :
        Conta(nomeCliente, salarioMensal, numeroConta, saldo) {
    defineLimit();
}

ContaEspecial::~ContaEspecial() {
    std::cout << "Destrutor de ContaEspecial" << std::endl;
}

void ContaEspecial::defineLimit() {
    Conta::limite = salarioMensal * LIMIT_FACTOR;
}
