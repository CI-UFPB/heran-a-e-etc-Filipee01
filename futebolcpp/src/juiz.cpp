#include "juiz.h"
#include <iostream>

// Construtor
juiz::juiz(const std::string &nome, int idade, int anos_experiencia)
    : pessoa(nome, idade), anos_experiencia(anos_experiencia), partidas_arbitradas(0) {}

// Gets e Sets
int juiz::get_anos_experiencia() const {
    return anos_experiencia;
}

void juiz::set_anos_experiencia(int anos) {
    this->anos_experiencia = anos;
}

int juiz::get_partidas_arbitradas() const {
    return partidas_arbitradas;
}

void juiz::set_partidas_arbitradas(int partidas) {
    this->partidas_arbitradas = partidas;
}

// Método para incrementar o número de partidas arbitradas
void juiz::incrementar_partidas_arbitradas() {
    partidas_arbitradas++;
}

// Implementação da função para exibir informações
void juiz::exibir_informacoes() const {
    std::cout << "Nome: " << nome << "\nIdade: " << idade
              << "\nAnos de Experiencia: " << anos_experiencia
              << "\nPartidas Arbitradas: " << partidas_arbitradas << std::endl;
}