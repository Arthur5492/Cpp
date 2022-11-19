#include "configuration.hpp"
#include "menu.hpp"
#include "Musics.hpp"

  using namespace std;

int main()
{
string MusicFile;
size_t bpm;
string Name;
vector<pair<size_t,size_t>>Music;

system("cls");

Start(); //Inicio com nomezinho
Caixa(5);//Caixa do inicio, que vai ser gerada em 5ms de velocidade

while(true)
{
  char ch;
    cin>>ch;
      Beep(C5,100);
  if (ch==1)
  {
    //LoadMusic(MusicFile, bpm, Music);
    Name = MusicFile; Name.erase(Name.end(), Name.end()-4);
    continue;
  }
}



  return 0;
}
