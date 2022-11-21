#include "Musics.hpp"


//Função de ler linha específica
fstream &GotoLine(unsigned int num){
    file.seekg(ios::beg);
    for(int i=0; i < num - 1; ++i){
        file.ignore(numeric_limits<streamsize>::max(),'\n');
    }
    return file;
}


bool LoadMusic(string MusicFile, size_t bpm, vector<pair<size_t,size_t>>Music)
{
  ifstream filereader(MusicFile);
    if(filereader.good())
    {
      size_t note, noteTempo, tempo,name;



      return true;
    }
    return false;
}

bool CreateMusic(string create)
{

  return true;
}
