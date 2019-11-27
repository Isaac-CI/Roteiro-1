#include <string>
#include "Pagamento.h"

Pagamento::Pagamento()
{
    valorPagamento = 0.0;
    nomeDoFuncionario = "Nome";
}
std::string Pagamento::getNomeDoFuncionario()
{
    return nomeDoFuncionario;
}

double Pagamento::getValorPagamento()
{
    return valorPagamento;
}

void Pagamento::setNomeDoFuncionario(std::string str)
{
    nomeDoFuncionario = str;
}

void Pagamento::setValorPagamento(double v)
{
    valorPagamento = v;
}
