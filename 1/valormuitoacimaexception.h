#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H

#include<stdexcept>

using namespace std;

class ValorMuitoAcimaException:public runtime_error
{
    public:
        ValorMuitoAcimaException():runtime_error("Valor muito acima"){}

};

#endif // VALORMUITOACIMAEXCEPTION_H
