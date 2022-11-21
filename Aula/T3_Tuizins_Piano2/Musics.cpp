#include "Musics.hpp"


bool LoadMusic(string MusicFile, string *name, size_t *bpm, vector<size_t>*Music, vector<size_t>*Tempo)
{
  ifstream filereader(MusicFile);
    if(filereader.good())
    {
      //PEga o nome da musica
      SelectLine(filereader,3);
      filereader.ignore(numeric_limits<streamsize>::max(),':');
        getline(filereader,*name);
          //Pega o BPM
          SelectLine(filereader,5);
          filereader.ignore(numeric_limits<streamsize>::max(),':');
          filereader>>*bpm;

            //Pega Nota ///////////////ARRUMAR ISSOOOOOOOOOOOOOOOOOOOOOOOOOOO// TA NO MAIN TBM ALGO ERRO
            SelectLine(filereader,8);
            size_t tmp;
            while(filereader>>tmp)
            {
              Music->push_back(tmp);
              for(size_t i=0;i<Music.size();i++)cout<<"Sla: "<<Music.at(i)<<endl;
            }
          filereader.close();
      return true;
    }
  return false;
}


bool CreateMusic(string Create)
{
  return true;
}

void SelectLine(ifstream &file, size_t num)
{
  file.seekg(std::ios::beg);
for(int i=0; i < num - 1; ++i)
  {
    file.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
  }

}
