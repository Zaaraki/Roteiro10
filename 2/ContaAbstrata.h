#ifndef LIST08_1_ABSTRACTACCOUNT_H
#define LIST08_1_ABSTRACTACCOUNT_H

class ContaAbstrata {

public:

	virtual ~ContaAbstrata() = 0;

    virtual void sacar(const double value) = 0 ;

    virtual void depositar(const double value) = 0;

    virtual void print() = 0;
};

#endif //LIST08_1_ABSTRACTACCOUNT_H
