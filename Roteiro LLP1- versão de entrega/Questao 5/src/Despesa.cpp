#include <string>
#include "Despesa.h"

Despesa::Despesa(){}

std::string Despesa::getTipo()
{
    return tipo;
}

double Despesa::getValor()
{
    return valor;
}

void Despesa::setTipo(std::string t)
{
    tipo = t;
}

void Despesa::setValor(double v)
{
    valor = v;
}

