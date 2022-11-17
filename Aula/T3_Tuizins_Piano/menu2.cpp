#include "menu.hpp"

void Menu::riscoX()
{
  int x1=2,x2=50;
  for(size_t i=0;i<50;i++)
  {
    gotoxy(x1,3);
    std::this_thread::sleep_for(std::chrono::milliseconds(5));
    cout<<"-";
    gotoxy(x2,20);
    std::this_thread::sleep_for(std::chrono::milliseconds(5));
    cout<<"-";
    x2-=1;
    x1+=1;
  }
}

void Menu::riscoY()
{
  int y1=19,y2=19;
  for(size_t i=0;i<16;i++)
  {
    gotoxy(2,y1);
    std::this_thread::sleep_for(std::chrono::milliseconds(5));
    cout<<"|";
    gotoxy(50,y2);
    std::this_thread::sleep_for(std::chrono::milliseconds(5));
    cout<<"|";
    y1-=1;
    y2-=1;
  }
}

void Menu::caixa()
{
  riscoX();
  riscoY();
}
