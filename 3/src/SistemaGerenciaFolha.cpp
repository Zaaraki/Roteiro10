#include "SistemaGerenciaFolha.h"
#include "OrcamentoEstouradoException.h"

void SistemaGerenciaFolha::setFuncionarios(const vector<Funcionario *> &funcionarios) {
    SistemaGerenciaFolha::funcionarios = funcionarios;
}

double SistemaGerenciaFolha::calculaValorTotalFolha() throw (OrcamentoEstouradoException) {
    if(funcionarios.size() == 0) {
        return 0;
    }

    double pagamentoTotal = 0;
    for (auto item : funcionarios) {
        pagamentoTotal += item->calculaSalario();
    }

    if(dinheiroDisponivel < pagamentoTotal) {
        throw OrcamentoEstouradoException();
    }
    return pagamentoTotal;
}

void SistemaGerenciaFolha::setDinheiroDisponivel(double dinheiroDisponivel) {
    SistemaGerenciaFolha::dinheiroDisponivel = dinheiroDisponivel;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(int id) throw (FuncionarioNaoExisteException) {
    for (auto item : funcionarios) {
        if(item->getId() == id) {
            return item->calculaSalario();
        }
    }
    throw FuncionarioNaoExisteException();
}


