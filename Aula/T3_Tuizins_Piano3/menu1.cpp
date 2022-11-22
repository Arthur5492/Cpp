#include "menu.hpp"

void Start()
{
  gotoxy(5,3);
  cout<<"Welcome to Tuizins";
  Charge(3);
  sleep(1);
  Pinting();
}


void Charge(unsigned int times)
{
  for(size_t i=0;i<times;i++)
  {
    sleep(1);
    cout<<".";
  }
}

void gotoxy(int x,int y)
{
  COORD c;
  c.X=x;
  c.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}


void Pinting()
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
while(1){
    gotoxy(25,22);
    printf("PRESS ANY KEY TO CONTINUE");
    if(_kbhit()){
        break;
    }
    Beep(C4,100);
    std::this_thread::sleep_for(std::chrono::milliseconds(900));
    gotoxy(25,22);
    cout<<"                          ";
    std::this_thread::sleep_for(std::chrono::milliseconds(900));
    if(_kbhit()){
      Beep(C5,100);
      system("cls");
        break;
    }
  }
}
