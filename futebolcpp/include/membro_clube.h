#ifndef MEMBRO_CLUBE_H
#define MEMBRO_CLUBE_H

#include "pessoa.h"
#include <string>

// Classe membro_clube derivada de pessoa
class membro_clube : public pessoa {
protected:
    std::string clube;
    double salario;

public:
    membro_clube(const std::string &nome = "Indefinido", int idade = 0, 
                 const std::string &clube = "Sem Clube", double salario = 0.0);

    // Gets e Sets
    std::string get_clube() const;
    void set_clube(const std::string &clube);
    double get_salario() const;
    void set_salario(double salario);

    // Exibir informações (função virtual da classe base)
    virtual void exibir_informacoes() const override;
};

#endif // MEMBRO_CLUBE_H
