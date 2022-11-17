#include "menu.hpp"

void Menu::Start()
{
  gotoxy(5,3);
  cout<<"Welcome to Tuizins";
  sleep(1);
  Charge(2);
  Pinting();
  system("cls");
}


void Menu::Charge(unsigned int times)
{
  for(size_t i;i<times;i++)
  {
    cout<<".";
    sleep(1);
  }
}

void Menu::gotoxy(int x,int y)
{
  COORD c;
  c.X=x;
  c.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}


void Menu::Pinting()
{
gotoxy(5,5);
printf("                                                     .-'''-.     ");
gotoxy(5,6);
printf("                                                    '   _    \\   ");
gotoxy(5,7);
printf("_________   _...._      .--.             _..._    /   /` '.   \\  ");
gotoxy(5,8);
printf("\\        |.'      '-.   |__|           .'     '. .   |     \\  '  ");
gotoxy(5,9);
printf(" \\        .'```'.    '. .--.          .   .-.   .|   '      |  ' ");
gotoxy(5,10);
printf("  \\      |       \\     \\|  |    __    |  '   '  |\\    \\     / /  ");
gotoxy(5,11);
printf("   |     |        |    ||  | .:--.'.  |  |   |  | `.   ` ..' /  ");
gotoxy(5,12);
printf("   |      \\      /    . |  |/ |   \\ | |  |   |  |    '-...-'`   ");
gotoxy(5,13);
printf("   |     |\\`'-.-'   .'  |  |`' __ | | |  |   |  |     ");
gotoxy(5,14);
printf("   |     | '-....-'`    |__| .'.''| | |  |   |  |   ");
gotoxy(5,15);
printf("  .'     '.                 / /   | |_|  |   |  |       ");
gotoxy(5,16);
printf("'-----------'               \\ \\._,\\ '/|  |   |  |  ");
gotoxy(5,17);
printf("                             `--'  `' '--'   '--'  ");
}
