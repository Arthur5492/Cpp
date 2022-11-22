#include "configuration.hpp"




Sheet::Sheet(string name, size_t bpm, vector<size_t> melodia, vector<size_t>tempo)
  {
    m_name = name;
    m_bpm = bpm*10;
    m_melody = melodia;
    m_musicDuration = tempo;


    for(size_t i=0;i<m_melody.size();i++)
    {

    //Isso é para eu poder usar o tempo certo da partitura, em vez de ter que colocar tudo em milissegundos
      float duraNote = m_bpm/m_musicDuration.at(i); // E basicamente, define o tempo de cada nota
      Beep(m_melody.at(i), duraNote);
      int pauseBetweenNotes = duraNote*0.45;
       std::this_thread::sleep_for(std::chrono::milliseconds(pauseBetweenNotes));
    }

  };
