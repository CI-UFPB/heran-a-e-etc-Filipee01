#include "membro_clube.h"
#include <iostream>

// Construtor
membro_clube::membro_clube(const std::string &nome, int idade, 
                           const std::string &clube, double salario)
    : pessoa(nome, idade), clube(clube), salario(salario) {}

// Gets e Sets
std::string membro_clube::get_clube() const {
    return clube;
}

void membro_clube::set_clube(const std::string &clube) {
    this->clube = clube;
}

double membro_clube::get_salario() const {
    return salario;
}

void membro_clube::set_salario(double salario) {
    this->salario = salario;
}

// Implementação da função para exibir informações
void membro_clube::exibir_informacoes() const {
    std::cout << "Nome: " << nome << "\nIdade: " << idade
              << "\nClube: " << clube << "\nSalario: " << salario << std::endl;
}
