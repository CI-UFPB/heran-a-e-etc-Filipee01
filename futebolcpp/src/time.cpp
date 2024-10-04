#include "time.h"
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

// Implementação do construtor
time::time(const std::string &nome) : nome(nome), tecnico_principal(nullptr), pontuacao(0) {}

// Implementação dos métodos
string time::get_nome() const {
    return nome;
}

void time::set_nome(const std::string &nome) {
    this->nome = nome;
}

tecnico* time::get_tecnico() const {
    return tecnico_principal;
}

void time::set_tecnico(tecnico *tec) {
    tecnico_principal = tec;
}

vector<jogador>& time::get_jogadores() {
    return jogadores;
}

void time::adicionar_jogador(const jogador &j) {
    jogadores.push_back(j);
}

int time::get_pontuacao() const {
    return pontuacao;
}

void time::set_pontuacao(int pontos) {
    pontuacao = pontos;
}

void time::registrar_resultado(char resultado) {
    if (resultado == 'V') {
        pontuacao += 3;
    } else if (resultado == 'E') {
        pontuacao += 1;
    }
}

bool time::operator<(const time &outro) const {
    return pontuacao < outro.pontuacao;
}

void time::exibir_informacoes() const {
    cout << "Time: " << nome << endl;
    if (tecnico_principal) {
        cout << "Tecnico: " << tecnico_principal->get_nome() << endl;
    }
    cout << "Pontuacao: " << pontuacao << endl;
    cout << "Jogadores: " << endl;
    for (const auto &j : jogadores) {
        j.exibir_informacoes();
    }
}