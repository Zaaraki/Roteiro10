#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#include <vector>
#include "Funcionario.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

using namespace std;

class SistemaGerenciaFolha {

private:
    vector<Funcionario *> funcionarios;
    double dinheiroDisponivel;

public:

    void setDinheiroDisponivel(double dinheiroDisponivel);

    void setFuncionarios(const vector<Funcionario *> &funcionarios);

    double calculaValorTotalFolha() throw(OrcamentoEstouradoException);

    double consultaSalarioFuncionario(int id) throw(FuncionarioNaoExisteException);
};

#endif // SISTEMAGERENCIAFOLHA_H
