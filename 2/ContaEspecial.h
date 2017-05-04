#ifndef LIST08_1_SPECIALACCOUNT_H
#define LIST08_1_SPECIALACCOUNT_H

#include "Conta.h"

class ContaEspecial : public Conta{

public:

	~ContaEspecial();

    ContaEspecial(const string &nomeCliente, float salarioMensal, const string &numeroConta, float saldo);

private:
    const static int LIMIT_FACTOR = 3;

    void defineLimit() override;
};


#endif //LIST08_1_SPECIALACCOUNT_H
