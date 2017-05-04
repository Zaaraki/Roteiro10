#include <iostream>
#include "Conta.h"
#include "saldonaodisponivelexception.h"

Conta::Conta(const string &nomeCliente, float salarioMensal, const string &numeroConta, float saldo)
        : nomeCliente(nomeCliente), salarioMensal(salarioMensal), numeroConta(numeroConta), saldo(saldo) {
    defineLimit();
}

Conta::~Conta() {
    std::cout << "Destrutor de Conta" << endl;
}

const string &Conta::getNomeCliente() const {
    return nomeCliente;
}

void Conta::setNomeCliente(const string &nomeCliente) {
    Conta::nomeCliente = nomeCliente;
}

float Conta::getSalarioMensal() const {
    return salarioMensal;
}

void Conta::setSalarioMensal(float salarioMensal) {
    Conta::salarioMensal = salarioMensal;
    defineLimit();
}

const string &Conta::getNumeroConta() const {
    return numeroConta;
}

void Conta::setNumeroConta(const string &numeroConta) {
    Conta::numeroConta = numeroConta;
}

float Conta::getSaldo() const {
    return saldo;
}

void Conta::setSaldo(float saldo) {
    Conta::saldo = saldo;
}

float Conta::getLimite() const {
    return limite;
}

void Conta::defineLimit() {
    Conta::limite = salarioMensal * LIMIT_FACTOR;
}

void Conta::sacar(const double value) {
    if(value > Conta::saldo)
        throw SaldoNaoDisponivelException();
    else
    Conta::saldo -= value;
}

void Conta::depositar(const double value) {
    Conta::saldo += value;
}

void Conta::print() {
    cout << "Nome: " << getNomeCliente() << "; Salario mensal: " << getSalarioMensal()
         << "; Num Conta : " << getNumeroConta() << "; saldo: " << getSaldo()
         << "; Limite: " << getLimite() << endl;
}
