#include "C:\Users\arthu\OneDrive\Escola IFC\C_Cpp\Cpp\Aula\T3_Tuizins_Piano\Configuration/configuration.hpp"
#include "C:\Users\arthu\OneDrive\Escola IFC\C_Cpp\Cpp\Aula\T3_Tuizins_Piano\Menu/menu.hpp"

  using namespace std;

int main()
{
  system("cls");

vector<size_t>notas
{
  E5,E5,0,E5,0,C5,E5,G5,0,G4,0,
  C5,0,G4,0,E4,0,A4,B4,AS4,A4,0,
  G4,E5,G5,A5,F5,G5,0,E5,C5,D5,B4,0,
  C5,0,G4,0,E4,0,A4,B4,AS4,A4,0,
  G4,E5,G5,A5,F5,G5,0,E5,C5,D5,B4,0,
  E5,C5,G4,0,GS4,A4,F5,F5,A4,0,
  B4,A5,A5,A5,G5,F5,E5,C5,A4,G4,0,
  E5,C5,G4,0,GS4,A4,F5,F5,A4,0,
  G4,F5,F5,F5,E5,D5,C5,0
};
vector<size_t>tempos
{
  8,8,8,8,8,8,4,4,4,4,4,
  4,8,4,8,4,8,4,4,8,4,8,
  4,4,8,4,8,8,8,4,8,8,4,8,
  4,8,4,8,4,8,4,4,8,4,8,
  4,4,8,4,8,8,8,4,8,8,4,8,
  8,4,8,4,4,8,4,8,4,4,
  4,8,4,4,4,4,8,4,8,4,8,
  8,4,8,8,4,8,4,8,4,8,
    8,4,8,4,4,4,2,2
};
Menu menu1;
menu1.Start();

Menu menu2;
menu2.caixa(5);//Caixa vai rodar em 5ms

 Sheet master(80,notas,tempos);


  return 0;
}
