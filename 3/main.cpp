#include <iostream>
#include "SistemaGerenciaFolha.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"

int main() {
    SistemaGerenciaFolha sistema;
    vector<Funcionario *> funcionarios(3);

    funcionarios[0] = new Assalariado("Amaro", 1, 4000);
    funcionarios[1] = new Horista("Apollo", 2, 70, 30);
    funcionarios[2] = new Comissionado("Thor", 3, 2000, 300, 4);

    sistema.setFuncionarios(funcionarios);

    try {
        sistema.consultaSalarioFuncionario(10); //NAO EXISTE FUNCIONARIO 10
    }catch (FuncionarioNaoExisteException &e) {
        cout << "Excecao: " << e.what() << endl << endl;
    }

    sistema.setDinheiroDisponivel(1000);
    try{
        cout << "Valor total da folha: " << sistema.calculaValorTotalFolha() << endl;
    }
    catch(OrcamentoEstouradoException &e) {
        cout << "Excecao: " << e.what() << endl << endl;
    }

    for (auto & item : funcionarios) {
        delete item;
    }
    funcionarios.clear();

    return 0;
}
