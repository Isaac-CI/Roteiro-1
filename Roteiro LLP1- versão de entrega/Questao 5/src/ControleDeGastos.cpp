#include <string>
#include "ControleDeGastos.h"

ControleDeGastos::ControleDeGastos(){}

void ControleDeGastos::setDespesa(Despesa d, int pos)
{
    despesas[pos].tipo = d.tipo;
    despesas[pos].valor = d.valor;
}

double ControleDeGastos::calculaTotalDeDespesas()
{
    double custo = 0;
    for(int i = 0; i < 10; i++){
        custo += despesas[i].valor;
    }
    return custo;
}

bool   ControleDeGastos::existeDespesaDoTipo()
{
    for(int i = 0; i < 10; i++)
    {
        if(despesas[i].tipo == "passado")
            return true;
    }
    return false;
}
