#include "tecnico.h"
#include <iostream>

// Construtor
tecnico::tecnico(const std::string &nome, int idade, const std::string &clube, 
                 double salario, int anos_experiencia)
    : membro_clube(nome, idade, clube, salario), anos_experiencia(anos_experiencia) {}

// Gets e Sets
int tecnico::get_anos_experiencia() const {
    return anos_experiencia;
}

void tecnico::set_anos_experiencia(int anos) {
    this->anos_experiencia = anos;
}

// Implementação da função para exibir informações
void tecnico::exibir_informacoes() const {
    membro_clube::exibir_informacoes(); // Exibe informações de membro_clube
    std::cout << "Anos de Experiencia: " << anos_experiencia << std::endl;
}
