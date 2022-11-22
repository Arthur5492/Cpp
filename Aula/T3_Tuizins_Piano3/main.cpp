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
// Caixa(10,300);//Caixa do inicio, que vai ser gerada em 5ms de velocidade



while(true)
{
  vector <Sheet> mus;
  char ch;
    cin>>ch;
      Beep(C5,300);
  if (ch=='1')
  {
    system("cls");
    cout<<"Nome do arquivo:";
    cin>>MusicFile;
      LoadMusic(MusicFile, &Name, &Bpm, &Music, &Tempo);
        cout<<Name<<" Suceffuly Loaded!!"<<endl;
      sleep(1);
      Caixa(0,0);
    continue;
  }
  //
  if (ch=='2')
  {

  }
  //
  if (ch=='3')
  {
    system("cls");
    sleep(1);
    cout<<"Playing music.."<<endl;
    mus.push_back(Sheet(Name,Bpm,Music,Tempo));
    cout<<"Backing to menu."<<endl;
    sleep(1);
    Caixa(0,0);
  }
}
  return 0;
}
