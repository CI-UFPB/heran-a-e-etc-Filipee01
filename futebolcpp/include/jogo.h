#ifndef JOGO_H
#define JOGO_H

#include "time.h"
#include "juiz.h"

// Classe jogo que representa um jogo de futebol
class jogo {
private:
    time *time1;
    time *time2;
    juiz *juiz_principal;
    int gols_time1;
    int gols_time2;

public:
    jogo(time *time1, time *time2, juiz *juiz);

    // Gets e Sets
    time* get_time1() const;
    time* get_time2() const;
    juiz* get_juiz() const;

    void set_gols_time1(int gols);
    void set_gols_time2(int gols);

    // Exibir resultado do jogo
    void exibir_resultado() const;
};

#endif // JOGO_H
