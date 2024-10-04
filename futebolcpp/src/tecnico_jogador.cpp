#include "tecnico_jogador.h"

// Construtor
tecnico_jogador::tecnico_jogador(const std::string& nome, int idade, double salario, const std::string& posicao, int gols_marcados, int titulos_conquistados)
    : tecnico(nome, idade, salario, titulos_conquistados), jogador(nome, idade, salario, posicao, gols_marcados) {}

// Implementação de calcular_salario
double tecnico_jogador::calcular_salario() const {
    return tecnico::calcular_salario() + jogador::calcular_salario();
}

// Sobrecarga do operador <<
std::ostream& operator<<(std::ostream& out, const tecnico_jogador& tecnico_jogador) {
    out << "Nome: " << tecnico_jogador.nome << ", Idade: " << tecnico_jogador.idade
        << ", Posicao: " << tecnico_jogador.posicao << ", Gols Marcados: " << tecnico_jogador.gols_marcados
        << ", Titulos Conquistados: " << tecnico_jogador.titulos_conquistados << ", Salario Total: " << tecnico_jogador.calcular_salario();
    return out;
}
