#ifndef CRONOMETRO_H
#define CRONOMETRO_H

#include <ctime>
#include <vector>

class Cronometro {
  public:
    // Cria um cronômetro zerado e parado.
    Cronometro();
    // Inicia a contagem do tempo.
    void Iniciar();
    // Pausa a contagem do tempo.
    void Pausar();
    // Pausa e zera a contagem do tempo.
    void Zerar();
    // Retorna quantos segundos foram acumulados pelo cronômetro.
    double tempo();
    // Registra e retorna o tempo (em segundos) até uma volta do cronômetro. 
    // PRECONDIÇÃO: O cronômetro não está parado.
    double volta();
    // Retorna a *duração* de cada volta registrada. 
    std::vector<double> voltas();
 private:
  // Indica se o cronômetro está parado ou contando o tempo.
  bool pausado_;
  // Momento em que o cronômetro começou a contar o tempo.
  time_t inicio_;  
  // Tempo decorrido até que o cronômetro foi pausado pela última vez.
  double acumulado_;   
  // Tempos de quando as voltas foram registradas.
  std::vector<double> tempos_;  
};

#endif