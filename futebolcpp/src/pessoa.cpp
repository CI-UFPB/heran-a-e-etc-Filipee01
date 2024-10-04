#include "pessoa.h"

// Inicialização do contador estático
int pessoa::contador = 0;

// Construtor
pessoa::pessoa(const std::string &nome, int idade) : nome(nome), idade(idade) {
    contador++; // Incrementa o contador ao criar uma nova pessoa
}

// Gets e Sets
std::string pessoa::get_nome() const {
    return nome;
}

void pessoa::set_nome(const std::string &nome) {
    this->nome = nome;
}

int pessoa::get_idade() const {
    return idade;
}

void pessoa::set_idade(int idade) {
    this->idade = idade;
}

// Sobrecarga do operador ==
bool pessoa::operator==(const pessoa &other) const {
    return (nome == other.nome) && (idade == other.idade);
}

// Função estática para obter o contador de pessoas
int pessoa::get_contador() {
    return contador;
}
