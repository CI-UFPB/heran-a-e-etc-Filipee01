#ifndef TECNICO_H
#define TECNICO_H

#include "membro_clube.h"

// Classe tecnico derivada de membro_clube
class tecnico : public membro_clube {
private:
    int anos_experiencia;

public:
    tecnico(const std::string &nome = "Indefinido", int idade = 0, 
            const std::string &clube = "Sem Clube", double salario = 0.0,
            int anos_experiencia = 0);

    // Gets e Sets
    int get_anos_experiencia() const;
    void set_anos_experiencia(int anos);

    // Exibir informações (função virtual da classe base)
    virtual void exibir_informacoes() const override;
};

#endif // TECNICO_H
