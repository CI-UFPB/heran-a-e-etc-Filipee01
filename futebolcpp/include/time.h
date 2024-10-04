#ifndef TIME_H
#define TIME_H

#include "jogador.h"
#include "tecnico.h"
#include <vector>
#include <string>

// Classe time que representa um time de futebol
class time {
private:
    std::string nome;
    tecnico *tecnico_principal;
    std::vector<jogador> jogadores;
    int pontuacao; // Adicionado atributo pontuacao

public:
    time(const std::string &nome = "Indefinido");

    // Gets e Sets
    std::string get_nome() const;
    void set_nome(const std::string &nome);
    
    tecnico* get_tecnico() const;
    void set_tecnico(tecnico *tec);

    std::vector<jogador>& get_jogadores();
    void adicionar_jogador(const jogador &j);

    int get_pontuacao() const; // Adicionado getter para pontuacao
    void set_pontuacao(int pontos); // Adicionado setter para pontuacao

    void registrar_resultado(char resultado); // Adicionado método para registrar resultado

    // Sobrecarga do operador <
    bool operator<(const time &outro) const;

    // Exibir informações
    void exibir_informacoes() const;
};

#endif // TIME_H