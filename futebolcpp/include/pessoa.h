#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <iostream>

// Classe Abstrata pessoa
class pessoa {
protected:
    std::string nome;
    int idade;
    static int contador;

public:
    pessoa(const std::string &nome = "Indefinido", int idade = 0);
    virtual ~pessoa() = default;

    // Gets e Sets
    std::string get_nome() const;
    void set_nome(const std::string &nome);
    int get_idade() const;
    void set_idade(int idade);

    // Função virtual pura para exibir informações
    virtual void exibir_informacoes() const = 0;

    // Sobrecarga do operador ==
    bool operator==(const pessoa &other) const;

    // Função estática para obter o contador de pessoas
    static int get_contador();
};

#endif // PESSOA_H
