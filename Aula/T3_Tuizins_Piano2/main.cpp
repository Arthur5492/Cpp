#include "Configuration/configuration.hpp"
#include "Menu/menu.hpp"

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
Menu s1;
s1.Start();

Sheet master(120,notas,tempos);


  return 0;
}
