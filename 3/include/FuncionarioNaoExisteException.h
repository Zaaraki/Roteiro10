#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H

#include <stdexcept>

using namespace std;

class FuncionarioNaoExisteException : public runtime_error {

public:
    FuncionarioNaoExisteException() : runtime_error("Funcionario nao encontrado") {}
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H
