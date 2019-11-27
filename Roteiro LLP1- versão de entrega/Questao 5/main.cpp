#include <string>
#include "ControleDeGastos.h"
#include <iostream>

using namespace std;

int main()
{
    ControleDeGastos Joaozinho;
    Despesa des, pesa;
    des = Despesa();
    pesa = Despesa();
    des.setTipo("passado");
    des.setValor(1000.50);
    pesa.setValor(2003.44);
    pesa.setTipo("futuro");
    Joaozinho = ControleDeGastos();

    for(int i = 0; i < 10; i++){
        Joaozinho.despesas[i].setValor(0);
    }
    Joaozinho.setDespesa(des, 0);
    Joaozinho.setDespesa(pesa, 1);

    cout << "As despesas de Joaozinho somam no total: R$" << Joaozinho.calculaTotalDeDespesas() << endl;
}
