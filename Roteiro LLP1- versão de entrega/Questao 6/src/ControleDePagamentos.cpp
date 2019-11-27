#include <string>
#include "Pagamento.h"
#include "ControleDePagamentos.h"

ControleDePagamentos::ControleDePagamentos()
{
    for(int i = 0; i < 2; i++)
    {
        pagamentos[i].valorPagamento = 0;
        pagamentos[i].nomeDoFuncionario = "Nome";
    }
}

void ControleDePagamentos::setPagamentos(Pagamento p, int pos)
{
    pagamentos[pos] = p;
}
double ControleDePagamentos::calculaTotalDePagamentos()
{
    double d = 0;
    for(int i = 0; i < 2; i++)
    {
        d += pagamentos[i].valorPagamento;
    }
    return d;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(std::string nome)
{
    bool b = false;
    for(int i = 0; i < 2; i++)
    {
        if(pagamentos[i].nomeDoFuncionario == nome)
        {
            b = true;
        }
    }
    return b;
}
