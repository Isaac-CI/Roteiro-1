#include <iostream>
#include <string>
#include "include/Invoice.h"

using namespace std;

int main(){
    Invoice *conta_1;
    Invoice conta_2;

    conta_1 = new Invoice(10011011, "compra realizada no dia 18/02/2019", 3, 200.53);
    conta_2.setDescricao("compra realizada no dia 20/11/2019");
    conta_2.setNumero(10101010);
    conta_2.setPreco(100.10);
    conta_2.setQuantidade(10);

    cout <<"A fatura #"<< conta_1->numero << "\nse refere a "<< conta_1->getDescricao() << "\ncujo valor total foi de R$ " << conta_1->getInvoiceAmount()
    << "\ncorrespondente a compra de #" << conta_1->quantidade << " produtos que custam R$ " << conta_1->preco << " cada." << endl;


}
