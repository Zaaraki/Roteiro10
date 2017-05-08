#include "Funcionario.h"

Funcionario::Funcionario(const string &nome, int id) : nome(nome), id(id) {}

Funcionario::~Funcionario() {

}

const string &Funcionario::getNome() const {
    return nome;
}

int Funcionario::getId() const {
    return id;
}
