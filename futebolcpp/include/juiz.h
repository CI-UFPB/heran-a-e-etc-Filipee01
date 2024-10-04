#ifndef JUIZ_H
#define JUIZ_H

#include "pessoa.h"

// Classe juiz derivada de pessoa
class juiz : public pessoa {
private:
    int anos_experiencia;
    int partidas_arbitradas; // Adicionado atributo partidas_arbitradas

public:
    juiz(const std::string &nome = "Indefinido", int idade = 0, int anos_experiencia = 0);

    // Gets e Sets
    int get_anos_experiencia() const;
    void set_anos_experiencia(int anos);
    int get_partidas_arbitradas() const; // Adicionado getter para partidas_arbitradas
    void set_partidas_arbitradas(int partidas); // Adicionado setter para partidas_arbitradas

    // Método para incrementar o número de partidas arbitradas
    void incrementar_partidas_arbitradas();

    // Exibir informações (função virtual da classe base)
    virtual void exibir_informacoes() const override;
};

#endif // JUIZ_H