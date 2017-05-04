#include "testavalidanumero.h"
#include "valorabaixoexception.h"
#include "valoracimaexception.h"
#include "valormuitoacimaexception.h"
#include <iostream>

using namespace std;

void TestaValidaNumero::validaNumero(int num){
    if(num<=0)
        throw ValorAbaixoException();

    else if((num > 100) && (num < 1000))
        throw ValorAcimaException();

    else if (num>=1000)
        throw ValorMuitoAcimaException();

    else
        cout<< "GG, o numero nao lanca excecao"<<endl;
}
