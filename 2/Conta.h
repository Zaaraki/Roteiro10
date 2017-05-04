#ifndef LIST08_1_ACCOUNT_H
#define LIST08_1_ACCOUNT_H

#include "ContaAbstrata.h"
#include <string>

using namespace std;

class Conta : public ContaAbstrata {

private:
    const static int LIMIT_FACTOR = 2;
    virtual void defineLimit();

protected:
    string nomeCliente;
    float salarioMensal;
    string numeroConta;
    float saldo;
    float limite;

public:

    Conta(const string &nomeCliente, float salarioMensal, const string &numeroConta, float saldo);

    virtual ~Conta();

    const string &getNomeCliente() const;

    void setNomeCliente(const string &nomeCliente);

    float getSalarioMensal() const;

    void setSalarioMensal(float salarioMensal);

    const string &getNumeroConta() const;

    void setNumeroConta(const string &numeroConta);

    float getSaldo() const;

    void setSaldo(float saldo);

    float getLimite() const;

    void sacar(const double value) override;

    void depositar(const double value) override;

    void print() override;
};


#endif //LIST08_1_ACCOUNT_H
