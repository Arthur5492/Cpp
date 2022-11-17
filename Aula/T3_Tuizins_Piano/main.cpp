#include "configuration.hpp"
#include "menu.hpp"

  using namespace std;

int main()
{
  system("cls");

vector<size_t>notas
{
  F1, F1 ,F1 ,F1 ,F1, F1, F1
};
vector<size_t>tempos
{
  4,4,4,4,4,4,4
};
Menu menu1;
//menu1.Start();

Menu menu2;
menu2.caixa();

Sheet master(120,notas,tempos);


  return 0;
}
