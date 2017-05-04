#include <iostream>
#include "testavalidanumero.h"
#include "valorabaixoexception.h"
#include "valoracimaexception.h"
#include "valormuitoacimaexception.h"

using namespace std;

int main()
{
    TestaValidaNumero valida;
    try{
    valida.validaNumero(0);

    }catch(ValorAbaixoException &valorAbaixoException){
        cout << "Excecao ocorreu! " << valorAbaixoException.what() << endl;
    }

    valida.validaNumero(99);

    try{
    valida.validaNumero(101);
    }catch(ValorAcimaException &valorAcimaException){
        cout << "Excecao ocorreu! " << valorAcimaException.what() << endl;
    }
    valida.validaNumero(99);

    try{
    valida.validaNumero(1001);
    }catch(ValorMuitoAcimaException &valorMuitoAcimaException){
        cout << "Excecao ocorreu! " << valorMuitoAcimaException.what() << endl;
    }

    return 0;
}
