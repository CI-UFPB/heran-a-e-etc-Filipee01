#ifndef CAMPEONATO_H
#define CAMPEONATO_H

#include <vector>
#include "jogo.h"

/**
 * @brief Classe que representa um campeonato de futebol.
 */
class campeonato {
private:
    std::string nome;
    std::vector<time*> times;
    std::vector<jogo*> jogos;

public:
    // Construtor
    campeonato(const std::string& nome = "");

    // Métodos
    void adicionar_time(time* novo_time);
    void adicionar_jogo(jogo* novo_jogo);
    void exibir_informacoes_campeonato() const;
    void exibir_classificacao() const; // Adicionado método para exibir classificação
};

#endif