#include <string>
#include "Empregado.h"

Empregado::Empregado(){}

Empregado::Empregado(std::string n, std::string sn, double s){
    nome = n;
    sobrenome = sn;
    salario = s;
}

std::string Empregado::getNome(){
    return nome;
}

std::string Empregado::getSobrenome(){
    return sobrenome;
}

double Empregado::getSalario(){
    return salario;
}

void Empregado::setNome(std::string str){
    nome = str;
}
void Empregado::setSobrenome(std::string dummy){
    sobrenome = dummy;
}

void Empregado::setSalario(double dinheiro){
    if(dinheiro > 0)
        salario = dinheiro;
}
