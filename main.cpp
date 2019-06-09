#include "cronometro.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <ctime>

using namespace std;

// Quest�o 1: Escreva um programa que apresenta 10 problemas aritm�ticos
// para o usu�rio. Ao fim, ele deve imprimir o tempo que ele levou para
// responder cada um deles individualmente.
// OBS: Utilize a classe Cronometro.

void Problemas(Cronometro& cro_1){
  float resposta = 0.0;
  double parcial;
  cout << "Problema 1:" << endl;
  while(resposta != (2+2)){
    cout << "2 + 2 = ";
    cin >> resposta;
    if(resposta == (2+2))
      parcial = cro_1.volta();
  }

  cout << "Problema 2:" << endl;
  while(resposta != (2*8)){
    cout << "2 * 8 = ";
    cin >> resposta;
    if(resposta == (2*8))
      parcial = cro_1.volta();
  }

  cout << "Problema 3:" << endl;
  while(resposta != (600/30)){
    cout << "600/30 = ";
    cin >> resposta;
    if(resposta == (600/30))
      parcial = cro_1.volta();
  }

  cout << "Problema 4:" << endl;
  while(resposta != (656-9)){
    cout << "656 - 9 = ";
    cin >> resposta;
    if(resposta == (656-9))
      parcial = cro_1.volta();
  }

  cout << "Problema 5:" << endl;
  while(resposta != (pow(4,3))){
    cout << "4^3 = ";
    cin >> resposta;
    if(resposta == (pow(4,3)))
      parcial = cro_1.volta();
  }

  cout << "Problema 6:" << endl;
  while(resposta != (sqrt(1024))){
    cout << "raiz quadrada de 1024 = ";
    cin >> resposta;
    if(resposta == (sqrt(1024)))
      parcial = cro_1.volta();
  }

  cout << "Problema 7:" << endl;
  while(resposta != (56)){
    cout << "derivada de 56x + 456 = ";
    cin >> resposta;
    if(resposta == (56))
      parcial = cro_1.volta();
  }

  cout << "Problema 8:" << endl;
  while(resposta != (5*(5-15))){
    cout << "5*(5-15) = ";
    cin >> resposta;
    if(resposta == (5*(5-15)))
      parcial = cro_1.volta();
  }

  cout << "Problema 9:" << endl;
  while(resposta != (120)){
    cout << "5! = ";
    cin >> resposta;
    if(resposta == (120))
      parcial = cro_1.volta();
  }

  cout << "Problema 10:" << endl;
  while(resposta != (1+1)){
    cout << "1+1 = ";
    cin >> resposta;
    if(resposta == (1+1))
      parcial = cro_1.volta();
  }

}

int main() {
  Cronometro cro_1;
  vector<double> volta_i;
  double tempo_gasto;
  int i = 0;

  cro_1.Iniciar();
  Problemas(cro_1);
  cro_1.Pausar();
  tempo_gasto = cro_1.tempo();
  volta_i = cro_1.voltas();

  for(i = 0; i < volta_i.size(); i++){
    cout << "exercicio " << i+1 << " : " << volta_i[i] << " segundos" << endl;
  }
    cout << "Tempo total gasto com o questionario : " << tempo_gasto << " segundos" << endl;

  return 0;
}
