#include "configuration.hpp"
#include "menu.hpp"
#include "Musics.hpp"

  using namespace std;

int main()
{
string MusicFile;
size_t Bpm;
string Name;
vector<size_t>Music;
vector<size_t>Tempo;

system("cls");

// Start(); //Inicio com nomezinho Arthur Piano
// Caixa(0,100);//Caixa do inicio, que vai ser gerada em 5ms de velocidade



while(true)
{
  char ch;
    cin>>ch;
      Beep(C5,100);
  if (ch=='1')
  {
    system("cls");
    cout<<"Nome do arquivo:";
    cin>>MusicFile;
      LoadMusic(MusicFile, &Name, &Bpm, &Music, &Tempo);
        cout<<"Nome: "<<Name<<endl;
        cout<<"Bpm: " <<Bpm <<endl;
        // for(auto &i:Music)cout<<i<<' ';
        // for(auto &i:Tempo)cout<<i<<' ';
         Sheet(Bpm, Music, Tempo);


    continue;
  }
}



  return 0;
}
