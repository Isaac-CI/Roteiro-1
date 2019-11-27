#ifndef PAGAMENTO_H
#define PAGAMENTO_H


class Pagamento
{
    public:
        Pagamento();
        double valorPagamento;
        std::string nomeDoFuncionario;

        double getValorPagamento();
        std::string getNomeDoFuncionario();

        void setValorPagamento(double);
        void setNomeDoFuncionario(std::string);

    protected:

    private:
};

#endif // PAGAMENTO_H
