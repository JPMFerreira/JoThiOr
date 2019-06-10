#include "cronometro.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <ctime>

using namespace std;

Cronometro::Cronometro(){
    pausado_ = true;
    acumulado_ = 0;
}

void Cronometro::Iniciar(){
    pausado_ = false;
    time(&inicio_); 
}

void Cronometro::Pausar(){
    pausado_ = true;
    time_t agora;
    time(&agora);
    acumulado_ = agora-inicio_;
}

void Cronometro::Zerar(){
    pausado_ = true;
    acumulado_ = 0;
}

double Cronometro::tempo(){
    if(pausado_ == true)
        return acumulado_;
    else{
        time_t agora;
        time(&agora);
        acumulado_ = agora-inicio_;
    }
}

double Cronometro::volta(){
    time_t t;
    double aux = time(&t)-inicio_-acumulado_;
    acumulado_+=aux; //pra quando chamar de novo n rodar duas voltas ao inves de uma
    tempos_.push_back(aux); //insere no final do vector a volta dada
    return aux;
}

std::vector<double> Cronometro::voltas(){
    return tempos_;
}