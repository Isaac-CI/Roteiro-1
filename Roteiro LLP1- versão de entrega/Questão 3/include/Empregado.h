#ifndef EMPREGADO_H
#define EMPREGADO_H

class Empregado
{
    public:
        Empregado();
        Empregado(std::string, std::string, double);
        std::string nome, sobrenome;
        double salario;

        std::string getNome();
        std::string getSobrenome();
        double getSalario();

        void setNome(std::string);
        void setSobrenome(std::string);
        void setSalario(double);

    protected:

    private:
};

#endif // EMPREGADO_H
