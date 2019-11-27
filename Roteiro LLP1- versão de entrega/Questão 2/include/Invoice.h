#ifndef INVOICE_H
#define INVOICE_H

class Invoice
{
    public:
        Invoice();
        Invoice(int, std::string , int, double);
        int numero;
        std::string descricao;
        int quantidade;
        double preco;

        int getNumero();
        std::string getDescricao();
        int getQuantidade();
        double getPreco();

        void setNumero(int);
        void setDescricao(std::string);
        void setQuantidade(int);
        void setPreco(double);

        double getInvoiceAmount();

    protected:

    private:
};

#endif // INVOICE_H
