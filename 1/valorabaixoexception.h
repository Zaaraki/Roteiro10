#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H

#include<stdexcept>

using namespace std;

class ValorAbaixoException : public runtime_error
{
    public:
        ValorAbaixoException():runtime_error("Valor abaixo"){}

};

#endif // VALORABAIXOEXCEPTION_H
