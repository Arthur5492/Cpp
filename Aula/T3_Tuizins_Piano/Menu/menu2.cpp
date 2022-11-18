#include "menu.hpp"

void Menu::riscoX(size_t x)
{
  int x1=2,x2=50;
  for(size_t i=0;i<49;i++)
  {
    gotoxy(x1,3);
    std::this_thread::sleep_for(std::chrono::milliseconds(x));
    cout<<"-";
    gotoxy(x2,30);
    std::this_thread::sleep_for(std::chrono::milliseconds(x));
    cout<<"-";
    x2-=1;
    x1+=1;
  }
}

void Menu::riscoY(size_t y)
{
  int y1=4,y2=29;
  for(size_t i=0;i<26;i++)
  {
    gotoxy(2,y1);
    std::this_thread::sleep_for(std::chrono::milliseconds(y));
    cout<<"|";
    gotoxy(50,y2);
    std::this_thread::sleep_for(std::chrono::milliseconds(y ));
    cout<<"|";
    y1+=1;
    y2-=1;
  }
}

void Menu::escritas(size_t x)
{
  //Titulo
  gotoxy(15,5);
  cout<<"Tuizins Piano Menu!!!";
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //Topics
  gotoxy(4,8);
  cout<<"What do you wanna do? \\o/";
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //Things
  gotoxy(4,10);
  cout<<"1.Load a music";
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //
  gotoxy(4,12);
  cout<<"2.Create a music";
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //
  gotoxy(4,14);
  cout<<"3.Transpose a music(change tone)";
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //
  gotoxy(4,16);
  cout<<"4.Piano!!! \\o/";
  std::this_thread::sleep_for(std::chrono::milliseconds(x));

}

void Menu::caixa(size_t speed)
{
  riscoX(speed);
  riscoY(speed);
  gotoxy(3,6);
  for(size_t i=0;i<47;i++)cout<<"-";
  escritas(1000);
}
