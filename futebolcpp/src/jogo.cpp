#include "jogo.h"
#include <iostream>

// Construtor
jogo::jogo(time *time1, time *time2, juiz *juiz) 
    : time1(time1), time2(time2), juiz_principal(juiz), 
      gols_time1(0), gols_time2(0) {}

// Gets e Sets
time* jogo::get_time1() const {
    return time1;
}

time* jogo::get_time2() const {
    return time2;
}

juiz* jogo::get_juiz() const {
    return juiz_principal;
}

void jogo::set_gols_time1(int gols) {
    gols_time1 = gols;
}

void jogo::set_gols_time2(int gols) {
    gols_time2 = gols;
}

// Exibir resultado do jogo
void jogo::exibir_resultado() const {
    std::cout << "Jogo entre " << time1->get_nome() << " e " << time2->get_nome() << std::endl;
    std::cout << "Juiz: " << juiz_principal->get_nome() << std::endl;
    std::cout << "Placar: " << gols_time1 << " - " << gols_time2 << std::endl;
}
