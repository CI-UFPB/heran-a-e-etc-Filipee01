#include "campeonato.h"
#include <algorithm> // Para std::sort
#include <iostream>

// Construtor
campeonato::campeonato(const std::string& nome)
    : nome(nome) {}

// Adicionar time
void campeonato::adicionar_time(time* novo_time) {
    times.push_back(novo_time);
}

// Adicionar jogo
void campeonato::adicionar_jogo(jogo* novo_jogo) {
    jogos.push_back(novo_jogo);
}

// Exibir informações do campeonato
void campeonato::exibir_informacoes_campeonato() const {
    std::cout << "Campeonato: " << nome << std::endl;
    for (const auto& jogo : jogos) {
        jogo->exibir_resultado();
    }
}

// Exibir classificação dos times
void campeonato::exibir_classificacao() const {
    std::vector<time*> times_ordenados = times;
    std::sort(times_ordenados.begin(), times_ordenados.end(), [](time* a, time* b) {
        return *a < *b;
    });

    std::cout << "Classificação dos Times:" << std::endl;
    for (const auto& t : times_ordenados) {
        t->exibir_informacoes();
    }
}