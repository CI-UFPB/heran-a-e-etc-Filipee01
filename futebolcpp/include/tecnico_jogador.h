#ifndef TECNICO_JOGADOR_H
#define TECNICO_JOGADOR_H

#include "tecnico.h"
#include "jogador.h"

/**
 * @brief Classe que representa uma pessoa que pode ser tanto técnico quanto jogador.
 */
class tecnico_jogador : public tecnico, public jogador {
public:
    // Construtor
    tecnico_jogador(const std::string& nome = "", int idade = 0, double salario = 0.0, const std::string& posicao = "", int gols_marcados = 0, int titulos_conquistados = 0);

    // Implementação de calcular_salario()
    double calcular_salario() const;

    // Sobrecarga de operador <<
    friend std::ostream& operator<<(std::ostream& out, const tecnico_jogador& tecnico_jogador);
};

#endif
