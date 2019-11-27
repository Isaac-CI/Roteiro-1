#include <string>
#include "Empregado.h"
#include <iostream>

using namespace std;

int main(){
    Empregado *Jose;
    Empregado Joao;

    Jose = new Empregado("Jose", "Severino", 1875.90);
    Joao.setNome("Joao");
    Joao.setSobrenome("Silva");
    Joao.setSalario(2025.55);

    cout << "O salario anual de Jose eh: R$" << Jose->salario * 12 << endl;
    cout << "O salario anual de Joao eh: R$" << Joao.salario * 12 << endl;

    Jose->setSalario(1875.90 * 1.1);
    Joao.setSalario(2025.55 * 1.1);

    cout << "O salario anual de Jose apos o aumento eh: R$" << Jose->salario * 12 << endl;
    cout << "O salario anual de Joao apos o aumento eh: R$" << Joao.salario * 12 << endl;
}
