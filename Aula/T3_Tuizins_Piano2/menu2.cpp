#include "menu.hpp"

void RiscoX(size_t x)
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

void RiscoY(size_t y)
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

void Escritas(size_t x)
{
  //Titulo
  gotoxy(15,5);
  Beep(C3,300);
  cout<<"Tuizins Piano Menu!!!";
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //Topics
  gotoxy(4,8);
  Beep(D3,300);
  cout<<"What do you wanna do? \\o/";
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //Things
  gotoxy(4,10);
  Beep(E3,300);
  cout<<"1.Play a music";
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //
  gotoxy(4,12);
  Beep(G3,300);
  cout<<"2.Create a music";
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //
  gotoxy(4,14);
  Beep(A3,300);
  cout<<"3.Transpose a music(change tone)";
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //
  gotoxy(4,16);
  Beep(B3,300);
  cout<<"4.Piano!!! \\o/";
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //
  gotoxy(4,18);
  Beep(C4,300);
  cout<<"5.exit :( "<<endl;
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //
  gotoxy(4,20);
  cout<<"Input:";
}

void Caixa(size_t speed)
{
  RiscoX(speed);
  RiscoY(speed);
  std::this_thread::sleep_for(std::chrono::milliseconds(400));
  gotoxy(3,6);
  for(size_t i=0;i<47;i++)cout<<"-";
  sleep(1);
  Escritas(1000);
}
