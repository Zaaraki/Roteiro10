#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H

#include<stdexcept>

using namespace std;

class ValorAcimaException : public runtime_error
{
    public:
        ValorAcimaException():runtime_error("Valor acima"){}

};

#endif // VALORACIMAEXCEPTION_H
