#ifndef MENU_HPP
#define MENU_HPP

#include "includes.hpp"

using namespace std;

class Menu
{
private:

protected:

public:
  //Menu 1
  void Start();//Start menu
  void Charge(unsigned int times);
  void gotoxy(int x,int y);
  void Pinting();

  //Menu 2
  void riscoX();
  void riscoY();
  void caixa();

};
#endif
