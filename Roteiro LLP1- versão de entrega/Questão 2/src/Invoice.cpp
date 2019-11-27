#include <string>
#include "../include/Invoice.h"

Invoice::Invoice(){
}
Invoice::Invoice(int n, std::string d, int q, double p)
{
    numero = n;
    descricao = d;
    quantidade = q;
    preco = p;
}
    int Invoice::getNumero(){
        return numero;
    }

    std::string Invoice::getDescricao(){
        return descricao;
    }

    int Invoice::getQuantidade(){
        return quantidade;
    }

    double Invoice::getPreco(){
        return preco;
    }

    void Invoice::setNumero(int n){
        numero = n;
    }
    void Invoice::setDescricao(std::string str){
        descricao = str;
    }
    void Invoice::setQuantidade(int q){
        quantidade = q;
    }
    void Invoice::setPreco(double p){
        preco = p;
    }
    double Invoice::getInvoiceAmount(){
        double invoiceAmount;
        if(quantidade < 0)
            quantidade = 0;
        if(preco < 0.0)
            preco = 0.0;
        invoiceAmount = preco * quantidade;
        return invoiceAmount;
    }
