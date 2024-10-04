#include "campeonato.h"
#include "jogo.h"
#include "tecnico.h"
#include "juiz.h"
#include "jogador.h"
#include "time.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main() {
    // Criando dois técnicos
    tecnico tecnico1("Carlos Silva", 45, "Flamengo", 5000.0, 20); // Nome, idade, anos de experiência
    tecnico tecnico2("Ana Pereira", 38, "Corinthians", 4500.0, 15);

    // Criando dois times
    time time1("flamengo");
    time time2("corinthians");

    // Associando os técnicos aos times
    time1.set_tecnico(&tecnico1);
    time2.set_tecnico(&tecnico2);

    // Criando jogadores para o time 1
    jogador jogador1("Joao", 25, "Atacante", 5);
    jogador jogador2("Pedro", 22, "Zagueiro", 3);

    // Adicionando jogadores ao time 1
    time1.adicionar_jogador(jogador1);
    time1.adicionar_jogador(jogador2);

    // Criando jogadores para o time 2
    jogador jogador3("Lucas", 27, "Goleiro", 4);
    jogador jogador4("Andre", 24, "Meio-campo", 6);

    // Adicionando jogadores ao time 2
    time2.adicionar_jogador(jogador3);
    time2.adicionar_jogador(jogador4);

    // Criando um juiz
    juiz juiz1("Roberto Costa", 40, 10); // Nome, idade, anos de experiência

    // Criando um jogo entre os times com o juiz
    jogo jogo1(&time1, &time2, &juiz1);

    // Simulando o placar
    jogo1.set_gols_time1(2); // Time 1 marca 2 gols
    jogo1.set_gols_time2(1); // Time 2 marca 1 gol

    // Registrando o resultado no campeonato
    time1.registrar_resultado('V');
    time2.registrar_resultado('D');

    // Incrementando o número de partidas arbitradas pelo juiz
    juiz1.incrementar_partidas_arbitradas();

    // Criando o campeonato
    campeonato camp("Campeonato Quadrangular");
    camp.adicionar_time(&time1);
    camp.adicionar_time(&time2);
    camp.adicionar_jogo(&jogo1);

    // Exibindo informações sobre os times
    cout << "Informacoes dos Times:\n";
    time1.exibir_informacoes();
    cout << "\n";
    time2.exibir_informacoes();

    // Exibindo o resultado do jogo
    cout << "\nResultado do Jogo:\n";
    jogo1.exibir_resultado();

    // Exibindo a classificação do campeonato
    cout << "\nClassificacao do Campeonato:\n";
    camp.exibir_classificacao();

    return 0;
}