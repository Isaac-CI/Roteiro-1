#ifndef DESPESA_H
#define DESPESA_H


class Despesa
{
    public:
        Despesa();
        double valor;
        std::string tipo;

        double getValor();
        std::string getTipo();

        void setValor(double);
        void setTipo(std::string);

    protected:

    private:
};

#endif // DESPESA_H
