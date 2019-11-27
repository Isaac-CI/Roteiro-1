#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"

class ControleDeGastos
{
    public:
        ControleDeGastos();
        Despesa despesas[10];
        void setDespesa(Despesa, int);
        double calculaTotalDeDespesas();
        bool existeDespesaDoTipo();

    protected:

    private:
};

#endif // CONTROLEDEGASTOS_H
