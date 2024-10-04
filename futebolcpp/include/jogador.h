#ifndef JOGADOR_H
#define JOGADOR_H

#include "membro_clube.h"
#include <string>

// Classe jogador derivada de membro_clube
class jogador : public membro_clube {
private:
    std::string posicao;
    int gols_marcados;

public:
    jogador(const std::string &nome = "Indefinido", int idade = 0, 
            const std::string &clube = "Sem Clube", double salario = 0.0,
            const std::string &posicao = "Desconhecida", int gols_marcados = 0);

    // Gets e Sets
    std::string get_posicao() const;
    void set_posicao(const std::string &posicao);
    int get_gols_marcados() const;
    void set_gols_marcados(int gols);

    // Exibir informações (função virtual da classe base)
    virtual void exibir_informacoes() const override;
};

#endif // JOGADOR_H
