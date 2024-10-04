# Sistema de Gerenciamento de Campeonato de Futebol

## Descrição

Este projeto implementa um Sistema de Gerenciamento de Campeonato de Futebol utilizando conceitos de Programação Orientada a Objetos (POO). O sistema permite cadastrar times, jogadores, técnicos, juízes, técnico-jogador, gerenciar jogos e exibir a tabela de classificação dos times e jogadores.

## Funcionalidades

- **Cadastrar Times**: Cada time possui um nome, um técnico responsável e uma lista de jogadores.
- **Cadastrar Jogadores**: Jogadores são associados a um time, possuem uma posição (goleiro, zagueiro, meio-campo, atacante), idade e número de gols marcados.
- **Cadastrar Técnicos**: Técnicos são responsáveis por um time e possuem experiência (em anos).
- **Cadastrar Juízes**: Juízes possuem experiência e são alocados em jogos específicos.
- **Cadastrar Técnico-Jogador**: Técnico que também joga, combinando características de técnico e jogador.
- **Gerenciar Jogos**: Jogos entre times registram resultados e atualizam as estatísticas de pontuação dos times e jogadores.
- **Gerenciar Tabelas de Classificação**: Exibe a tabela de classificação de times ordenados por pontuação e de jogadores ordenados pelo número de gols.
- **Comparar Jogadores e Times**: Utiliza sobrecarga de operadores para comparar jogadores pelo número de gols e times pela pontuação.
- **Gerenciar Contadores Globais**: Utiliza variáveis e métodos de classe para gerenciar contadores globais.

## Estrutura do Projeto

- **Classes Base**:
  - `pessoa`: Classe abstrata que representa uma pessoa.
  - `membro_clube`: Derivada de `pessoa`, representa um membro do clube (jogador ou técnico).

- **Classes Derivadas**:
  - `jogador`: Derivada de `membro_clube`, representa um jogador de futebol.
  - `tecnico`: Derivada de `membro_clube`, representa um técnico de futebol.
  - `tecnico_jogador`: Herança múltipla de `jogador` e `tecnico`, representa uma pessoa que pode ser tanto técnico quanto jogador.
  - `juiz`: Derivada de `pessoa`, representa um juiz de futebol.
  - `time`: Representa um time de futebol.
  - `jogo`: Representa um jogo de futebol.
  - `campeonato`: Representa um campeonato de futebol.

## Diagrama UML

![Diagrama UML](uml_diagram.png)

## Como Compilar e Executar

### Pré-requisitos

- Compilador C++ (g++)
- Sistema operacional Windows

### Passos para Compilar

1. Navegue até o diretório do projeto:

    ```sh
    cd caminho/para/o/projeto/futebolcpp
    ```

2. Compile o projeto utilizando o comando:

    ```sh
    g++ -Iinclude -o meu_projeto src/main.cpp src/jogador.cpp src/pessoa.cpp src/tecnico.cpp src/juiz.cpp src/time.cpp src/jogo.cpp src/membro_clube.cpp src/campeonato.cpp
    ```

### Passos para Executar

1. Execute o programa compilado:

    ```sh
    .\meu_projeto
    ```

## Exemplo de Uso

Ao executar o programa, ele irá:

1. Criar dois técnicos.
2. Criar dois times e associar os técnicos aos times.
3. Criar jogadores e adicioná-los aos times.
4. Criar um juiz.
5. Criar um jogo entre os times com o juiz.
6. Simular o placar do jogo.
7. Registrar o resultado do jogo no campeonato.
8. Exibir informações sobre os times.
9. Exibir o resultado do jogo.
10. Exibir a classificação do campeonato.


