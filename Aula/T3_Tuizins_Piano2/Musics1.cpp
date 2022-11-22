#include "Musics.hpp"


bool LoadMusic(string MusicFile, string *name, size_t *bpm, vector<size_t>*Music, vector<size_t>*Tempo)
{
  vector<string> StringNotes;//Coleta as notas em Strings
  vector<string> StringTempo;//Coleta os Tempos em strings
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

            //Pega Nota
            SelectLine(filereader,8);
            string tmp;
            while(getline(filereader,tmp,' '))
            {
                if(tmp!=";\\n")
                StringNotes.push_back(tmp);
            }
            tmp.clear();

              *Music = Scale(StringNotes);
              //for(auto &i:*Music)cout<<i<<' ';


          //PEGA TEMPO
          SelectLine(filereader,11);
          while(getline(filereader,tmp,' '))
          {
              if(tmp!=";\\n")
              StringTempo.push_back(tmp);
          }
          transform(StringTempo.begin(),StringTempo.end(),back_inserter(*Tempo),
       [&](string s) {
           return stoi(s);
       });


      return true;
    }
    filereader.close();
  return false;
}

///////////////////////////////////////////////////////
void SelectLine(ifstream &file, size_t num)
{
  file.seekg(std::ios::beg);
for(size_t i=0; i < num - 1; ++i)
  {
    file.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
  }

}

vector<size_t> Scale(vector<string> lala){
  vector<size_t> pipi;//Transforma em Vetor
  for(size_t i=0;i<lala.size();i++)
  {
       if(lala.at(i)=="B0")pipi.push_back(B0);
  else if(lala.at(i)=="0")pipi.push_back(0);
  else if(lala.at(i)=="C1")pipi.push_back(C1);
  else if(lala.at(i)=="CS1")pipi.push_back(CS1);
  else if(lala.at(i)=="D1")pipi.push_back(D1);
  else if(lala.at(i)=="DS1")pipi.push_back(DS1);
  else if(lala.at(i)=="E1")pipi.push_back(E1);
  else if(lala.at(i)=="F1")pipi.push_back(F1);
  else if(lala.at(i)=="FS1")pipi.push_back(FS1);
  else if(lala.at(i)=="G1")pipi.push_back(G1);
  else if(lala.at(i)=="GS1")pipi.push_back(GS1);
  else if(lala.at(i)=="A1")pipi.push_back(A1);
  else if(lala.at(i)=="AS1")pipi.push_back(AS1);
  else if(lala.at(i)=="B1")pipi.push_back(B1); //1 OITAVA SI
  else if(lala.at(i)=="C2")pipi.push_back(C2);
  else if(lala.at(i)=="CS2")pipi.push_back(CS2);
  else if(lala.at(i)=="D2")pipi.push_back(D2);
  else if(lala.at(i)=="DS2")pipi.push_back(DS2);
  else if(lala.at(i)=="E2")pipi.push_back(E2);
  else if(lala.at(i)=="F2")pipi.push_back(F2);
  else if(lala.at(i)=="FS2")pipi.push_back(FS2);
  else if(lala.at(i)=="G2")pipi.push_back(G2);
  else if(lala.at(i)=="GS2")pipi.push_back(GS2);
  else if(lala.at(i)=="A2")pipi.push_back(A2);
  else if(lala.at(i)=="AS2")pipi.push_back(AS2);
  else if(lala.at(i)=="B2")pipi.push_back(B2); //2 OITAVA SI
  else if(lala.at(i)=="C3")pipi.push_back(C3);
  else if(lala.at(i)=="CS3")pipi.push_back(CS3);
  else if(lala.at(i)=="D3 ")pipi.push_back(D3);
  else if(lala.at(i)=="DS3")pipi.push_back(DS3);
  else if(lala.at(i)=="E3")pipi.push_back(E3);
  else if(lala.at(i)=="F3")pipi.push_back(F3);
  else if(lala.at(i)=="FS3")pipi.push_back(FS3);
  else if(lala.at(i)=="G3")pipi.push_back(G3);
  else if(lala.at(i)=="GS3")pipi.push_back(GS3);
  else if(lala.at(i)=="A3")pipi.push_back(A3);
  else if(lala.at(i)=="AS3")pipi.push_back(AS3);
  else if(lala.at(i)=="B3")pipi.push_back(B3); //3 OITAVA SI
  else if(lala.at(i)=="C4")pipi.push_back(C4);
  else if(lala.at(i)=="CS4")pipi.push_back(CS4);
  else if(lala.at(i)=="D4")pipi.push_back(D4);
  else if(lala.at(i)=="DS4")pipi.push_back(DS4);
  else if(lala.at(i)=="E4")pipi.push_back(E4);
  else if(lala.at(i)=="F4")pipi.push_back(F4);
  else if(lala.at(i)=="FS4")pipi.push_back(FS4);
  else if(lala.at(i)=="G4")pipi.push_back(G4);
  else if(lala.at(i)=="GS4")pipi.push_back(GS4);
  else if(lala.at(i)=="A4")pipi.push_back(A4);
  else if(lala.at(i)=="AS4")pipi.push_back(AS4);
  else if(lala.at(i)=="B4")pipi.push_back(B4); //4 OITAVA SI
  else if(lala.at(i)=="C5")pipi.push_back(C5);
  else if(lala.at(i)=="CS5")pipi.push_back(CS5);
  else if(lala.at(i)=="D5")pipi.push_back(D5);
  else if(lala.at(i)=="DS5")pipi.push_back(DS5);
  else if(lala.at(i)=="E5")pipi.push_back(E5);
  else if(lala.at(i)=="F5")pipi.push_back(F5);
  else if(lala.at(i)=="FS5")pipi.push_back(FS5);
  else if(lala.at(i)=="G5")pipi.push_back(G5);
  else if(lala.at(i)=="GS5")pipi.push_back(GS5);
  else if(lala.at(i)=="A5")pipi.push_back(A5);
  else if(lala.at(i)=="AS5")pipi.push_back(AS5);
  else if(lala.at(i)=="B5")pipi.push_back(B5); //5 OITAVA SI
  }
  return pipi;
}
