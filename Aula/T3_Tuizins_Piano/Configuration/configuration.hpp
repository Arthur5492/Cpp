#ifndef CONFIGURATION_HPP
#define CONFIGURATION_HPP

#include "../Misc/includes.hpp"
using namespace std;

class Sheet
{
  private:
      vector<size_t> m_melody; //Notas inseridas
      vector<size_t> m_musicDuration; //Tempo de cada nota
      float m_bpm; //Batidas por minuto, pra saber o tempo da música

  public:
    Sheet(float bpm, vector<size_t> melodia, vector<size_t>tempo);//Tocar a música em si
    ~Sheet() {};
};

#endif
