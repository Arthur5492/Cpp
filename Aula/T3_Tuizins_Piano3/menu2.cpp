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
  cout<<"Tuizins Piano Menu!!!";
  if(x!=0)Beep(C3,300);
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //Topics
  gotoxy(4,8);
  cout<<"What do you wanna do? \\o/";
  if(x!=0)Beep(D3,300);
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //Things
  gotoxy(4,10);
  cout<<"1.Load a music";
  if(x!=0)Beep(E3,300);
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //
  gotoxy(4,12);
  cout<<"2.Create a music";
  if(x!=0)Beep(F3,300);
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //
  gotoxy(4,14);
  cout<<"3.Play the Music!!";
  if(x!=0)Beep(G3,300);
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //
  gotoxy(4,16);
  cout<<"4.Transpose a music(change tone)";
  if(x!=0)Beep(A3,300);
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //
  gotoxy(4,18);
  cout<<"5.Piano!!! \\o/";
  if(x!=0)Beep(B3,300);
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //
  gotoxy(4,20);
  cout<<"6.exit :( "<<endl;
  if(x!=0)Beep(C4,300);
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
  //
  gotoxy(4,22);
  cout<<"Input:";
  if(x!=0)Beep(C5,300);
}

void Caixa(size_t speed1, size_t speed2)
{
  system("cls");
  RiscoX(speed1);
  RiscoY(speed1);
  std::this_thread::sleep_for(std::chrono::milliseconds(400));
  gotoxy(3,6);
  for(size_t i=0;i<47;i++)cout<<"-";
  std::this_thread::sleep_for(std::chrono::milliseconds(speed2));
  Escritas(speed2);
}
