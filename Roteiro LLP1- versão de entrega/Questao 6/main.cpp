#include <string>
#include <iostream>
#include "ControleDePagamentos.h"


using namespace std;

int main()
{
    std::string funcionario;
    double propina;

    Pagamento *dummy = new Pagamento();
    ControleDePagamentos *BadCompany = new ControleDePagamentos();

    cout << "Digite o Nome do funcionario:" << endl;
    cin >> funcionario;
    cout << "Digite o salario deste funcionario:" << endl;
    cin >> propina;

    dummy->setNomeDoFuncionario(funcionario);
    dummy->setValorPagamento(propina);

    BadCompany->setPagamentos(*dummy, 0);

    dummy->setNomeDoFuncionario("Tangerino");
    dummy->setValorPagamento(1000.99);

    BadCompany->setPagamentos(*dummy, 1);

    for(int i = 0; i < 2; i++)
    {
        cout << BadCompany->pagamentos[i].getNomeDoFuncionario() << " possui um salario de: R$" << BadCompany->pagamentos[i].getValorPagamento() << endl;
    }
    cout << "A empresa gasta ao todo R$" << BadCompany->calculaTotalDePagamentos() << " Com o salario de seus funcionarios." << endl;
}
