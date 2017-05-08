#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H

#include <stdexcept>

using namespace std;

class OrcamentoEstouradoException: public runtime_error {
    public:
         OrcamentoEstouradoException(): runtime_error("Orcamento estourou. Dinheiro insuficiente") {}

};

#endif // ORCAMENTOESTOURADOEXCEPTION_H
