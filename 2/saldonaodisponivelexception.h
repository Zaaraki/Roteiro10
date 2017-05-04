#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H

#include<stdexcept>

using namespace std;
class SaldoNaoDisponivelException : public runtime_error
{
    public:
        SaldoNaoDisponivelException() : runtime_error("Valor sacado maior que o saldo disponivel."){}

};

#endif // SALDONAODISPONIVELEXCEPTION_H
