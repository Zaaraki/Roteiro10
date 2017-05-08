#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

using namespace std;

class Funcionario {
protected:
    string nome;
    int id;

public:

    Funcionario(const std::string &nome, int id);

    virtual ~Funcionario();

    virtual double calculaSalario() = 0;

    const string &getNome() const;

    int getId() const;
};

#endif // FUNCIONARIO_H
