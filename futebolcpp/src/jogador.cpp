#include "jogador.h"
#include <iostream>

// Construtor
jogador::jogador(const std::string &nome, int idade, const std::string &clube, 
                 double salario, const std::string &posicao, int gols_marcados)
    : membro_clube(nome, idade, clube, salario), posicao(posicao), gols_marcados(gols_marcados) {}

// Gets e Sets
std::string jogador::get_posicao() const {
    return posicao;
}

void jogador::set_posicao(const std::string &posicao) {
    this->posicao = posicao;
}

int jogador::get_gols_marcados() const {
    return gols_marcados;
}

void jogador::set_gols_marcados(int gols) {
    this->gols_marcados = gols;
}

// Implementação da função para exibir informações
void jogador::exibir_informacoes() const {
    membro_clube::exibir_informacoes(); // Exibe informações de membro_clube
    std::cout << "Posicao: " << posicao 
              << "\nGols Marcados: " << gols_marcados << std::endl;
}
