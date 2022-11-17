#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

int Lvl1P[7]={27,30,32,36,41,43,48}
    ,Lvl2P[7]={55,61,65,73,82,87,97}
    ,Lvl3P[7]={110,123,130,146,164,174,196}
    ,Lvl4P[7]={220,246,261,293,329,349,392}
    ,Lvl5P[7]={440,493,523,587,659,698,783}
    ,Lvl6P[7]={880,987,1046,1174,1318,1396,1568}
    ,Lvl7P[7]={1760,1975,2093,2349,2637,2793,3136}
    ,Lvl8P[7]={2349,2637,2793,3136,3520,3951,4186};

    int Lvl1V[5]={29,34,38,46,51}
    ,Lvl2V[6]={51,58,69,77,92,103}
    ,Lvl3V[6]={103,116,138,155,185,207}
    ,Lvl4V[6]={207,233,277,311,369,415}
    ,Lvl5V[6]={415,466,554,622,739,830}
    ,Lvl6V[6]={830,932,1108,1244,1480,1661}
    ,Lvl7V[6]={1661,1864,2217,2489,2960,3322}
    ,Lvl8V[5]={2217,2489,2960,3322,3729};



float delay (float sec){ // This Function Used To Delay The Instructions Time
   float mmsec = sec*1000; // Here We Create A Float mmsec That is The Multiplication Of Sec With 1000
   clock_t start = clock(); // Here We Create A Clock Variable Called Start And We Make Sure It Gets The Value Of The Function Clock()
   while(clock()<start +mmsec); //Here The Function Will Repeat As Time As We Enter In The Parameter
   return 0;
}

void Color(int i){
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
}

void gotoxy(int x,int y){
  COORD c;
  c.X=x;
  c.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void LineOfLines(int N){
for(int i=1;i<=N;i++){
    printf("_");
}
}

void Box(int Lstr,int str,int tall,int wdt){
    gotoxy(str,Lstr);
    LineOfLines(tall);
    gotoxy(str,Lstr+wdt);
    LineOfLines(tall);
    for(int i=0;i<wdt;i++){
        gotoxy(str-1,Lstr+1+i);
        printf("|");
        if(i!= wdt-1){
            for(int j=0;j<tall;j++){
                printf(" ");
            }
        }
    }
    for(int i=0;i<wdt;i++){
        gotoxy(str+tall,Lstr+1+i);
        printf("|");
    }
}

void CondBox(int Lstr,int str,int tall,int wdt,int Cond,int RedCol,int WhiCol){
if(Cond == 1){
    Color(RedCol);
}
Box(Lstr,str,tall,wdt);
Color(WhiCol);
}

void PCore(int P1,int P2,int P3,int P4,int P5,int P6,int P7){
Box(8,8,62,15);

   CondBox(8,8,8,15,P1,12,15);
   CondBox(8,8+9,8,15,P2,12,15);
   CondBox(8,8+18,8,15,P3,12,15);
   CondBox(8,8+27,8,15,P4,12,15);
   CondBox(8,8+36,8,15,P5,12,15);
   CondBox(8,8+45,8,15,P6,12,15);
   CondBox(8,8+54,8,15,P7,12,15);
   if(P1 == 1){
     CondBox(8,8,8,15,P1,12,15);
   }else if(P2 == 1){
    CondBox(8,8+9,8,15,P2,12,15);
   }else if(P3 == 1){
    CondBox(8,8+18,8,15,P3,12,15);
   }else if(P4 == 1){
    CondBox(8,8+27,8,15,P4,12,15);
   }else if(P5 == 1){
    CondBox(8,8+36,8,15,P5,12,15);
   }else if(P6 == 1){
   CondBox(8,8+45,8,15,P6,12,15);
   }else if(P7 == 1){
    CondBox(8,8+54,8,15,P7,12,15);
   }

}

void Core1(int P1,int P2,int P3,int P4,int P5,int P6,int P7,int V1,int V2,int V3,int V4,int V5){
PCore(P1,P2,P3,P4,P5,P6,P7);
   CondBox(8,14,5,8,V1,12,15);
   CondBox(8,32,5,8,V2,12,15);
   CondBox(8,41,5,8,V3,12,15);
   CondBox(8,59,5,8,V4,12,15);
   CondBox(8,68,2,8,V5,12,15);
}

void Core2a7(int P1,int P2,int P3,int P4,int P5,int P6,int P7,int V1,int V2,int V3,int V4,int V5,int V6){
PCore(P1,P2,P3,P4,P5,P6,P7);
 CondBox(8,8,3,8,V1,12,15);
   CondBox(8,14,5,8,V2,12,15);
   CondBox(8,32,5,8,V3,12,15);
   CondBox(8,41,5,8,V4,12,15);
   CondBox(8,59,5,8,V5,12,15);
   CondBox(8,68,2,8,V6,12,15);
}

void Core8(int P1,int P2,int P3,int P4,int P5,int P6,int P7,int V1,int V2,int V3,int V4,int V5){
PCore(P1,P2,P3,P4,P5,P6,P7);
   CondBox(8,8,3,8,V1,12,15);
   CondBox(8,14,5,8,V2,12,15);
   CondBox(8,32,5,8,V3,12,15);
   CondBox(8,41,5,8,V4,12,15);
   CondBox(8,50,5,8,V5,12,15);
}

void BeepByLvl(int CoreLvl,int N){
if(CoreLvl==1){
Beep(Lvl1P[N],300);
}else if(CoreLvl==2){
Beep(Lvl2P[N],300);
}else if(CoreLvl==3){
Beep(Lvl3P[N],300);
}else if(CoreLvl==4){
Beep(Lvl4P[N],300);
}else if(CoreLvl==5){
Beep(Lvl5P[N],300);
}else if(CoreLvl==6){
Beep(Lvl6P[N],300);
}else if(CoreLvl==7){
Beep(Lvl7P[N],300);
}else if(CoreLvl==8){
Beep(Lvl8P[N],300);
}
}

void BeepByLvl2(int CoreLvl,int N){
if(CoreLvl==2){
Beep(Lvl2V[N],300);
}else if(CoreLvl==3){
Beep(Lvl3V[N],300);
}else if(CoreLvl==4){
Beep(Lvl4V[N],300);
}else if(CoreLvl==5){
Beep(Lvl5V[N],300);
}else if(CoreLvl==6){
Beep(Lvl6V[N],300);
}else if(CoreLvl==7){
Beep(Lvl7V[N],300);
}
}

void Pinting(){
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
    Beep(261,100);
    delay(0.9);
    gotoxy(25,22);
    printf("                          ");
    delay(1);
    if(_kbhit()){
        break;
    }
}
system("CLS");
}

int main()
{

    int CoreLvl=4,Into=0;
    int i1=0,i2=0,i3=0,i4=0,i5=0,i6=0,i7=0,v1=0,v2=0,v3=0,v4=0,v5=0,v6=0;


    Pinting();


    while(1){
        if(_kbhit()){
            switch(_getch()){
        case 'Q':
        case 'q':
            i1=1;
            Into=0;
            BeepByLvl(CoreLvl,1);
            break;
        case 'S':
        case 's':
            i2=1;
            Into=0;
            BeepByLvl(CoreLvl,2);
            break;
        case 'D':
        case 'd':
            i3=1;
            Into=0;
            BeepByLvl(CoreLvl,3);
            break;
        case 'F':
        case 'f':
            i4=1;
            Into=0;
            BeepByLvl(CoreLvl,4);
            break;
        case 'G':
        case 'g':
            i5=1;
            Into=0;
            BeepByLvl(CoreLvl,5);
            break;
        case 'H':
        case 'h':
            i6=1;
            Into=0;
            BeepByLvl(CoreLvl,6);
            break;
        case 'J':
        case 'j':
            i7=1;
            Into=0;
            BeepByLvl(CoreLvl,7);
            break;


        case 'A':
        case 'a':
            Into=0;
            if(CoreLvl==8){
            v1=1;
            Beep(Lvl8V[1],300);
            }else if(CoreLvl != 1){
            v1=1;
            BeepByLvl2(CoreLvl,1);
            }
            break;
        case 'Z':
        case 'z':
            Into=0;
            if(CoreLvl==1){
            v1=1;
            Beep(Lvl1V[1],300);
            }else if(CoreLvl == 8){
            v2=1;
            Beep(Lvl8V[2],300);
            }else{
            v2=1;
            BeepByLvl2(CoreLvl,2);
            }
            break;
        case 'R':
        case 'r':
            Into=0;
            if(CoreLvl==1){
            v2=1;
            Beep(Lvl1V[2],300);
            }else if(CoreLvl == 8){
            v3=1;
            Beep(Lvl8V[3],300);
            }else{
            v3=1;
            BeepByLvl2(CoreLvl,3);
            }
            break;
        case 'T':
        case 't':
            Into=0;
            if(CoreLvl==1){
            v3=1;
            Beep(Lvl1V[3],300);
            }else if(CoreLvl == 8){
            v4=1;
            Beep(Lvl8V[4],300);
            }else{
            v4=1;
            BeepByLvl2(CoreLvl,4);
            }
            break;
        case 'Y':
        case 'y':
            Into=0;
            if(CoreLvl == 8){
            v5=1;
            Beep(Lvl8V[5],300);
            }
            break;
        case 'U':
        case 'u':
            Into=0;
            if(CoreLvl==1){
            v4=1;
            Beep(Lvl1V[4],300);
            }else if(CoreLvl != 8){
            v5=1;
            BeepByLvl2(CoreLvl,5);
            }
            break;
        case 'I':
        case 'i':
            Into=0;
            if(CoreLvl==1){
            v5=1;
            Beep(Lvl1V[5],300);
            }else if(CoreLvl !=8){
            v6=1;
            BeepByLvl2(CoreLvl,6);
            }
            break;

        case '&':
        case '1':
            Into=0;
            CoreLvl=1;
            break;
        case 'é':
        case '2':
            Into=0;
            CoreLvl=2;
            break;
        case '"':
        case '3':
            Into=0;
            CoreLvl=3;
            break;
        case '\'':
        case '4':
            Into=0;
            CoreLvl=4;
            break;
        case '(':
        case '5':
            Into=0;
            CoreLvl=5;
            break;
        case '-':
        case '6':
            Into=0;
            CoreLvl=6;
            break;
        case 'è':
        case '7':
            Into=0;
            CoreLvl=7;
            break;
        case '_':
        case '8':
            Into=0;
            CoreLvl=8;
            break;

        }
        }

        if(CoreLvl==1 && Into == 0){
            Core1(i1,i2,i3,i4,i5,i6,i7,v1,v2,v3,v4,v5);
        }else if(CoreLvl>=2 && CoreLvl <= 7  && Into == 0){
            Core2a7(i1,i2,i3,i4,i5,i6,i7,v1,v2,v3,v4,v5,v6);
        }else if(CoreLvl==8  && Into == 0){
            Core8(i1,i2,i3,i4,i5,i6,i7,v1,v2,v3,v4,v5);
        }

        gotoxy(25,2);
        printf("CHOOSE THE PIANO SOUND LEVEL");

        gotoxy(28,4);
        if(CoreLvl==1){
            Color(12);
        }
            printf("1 ");
            Color(15);
        if(CoreLvl==2){
            Color(12);
        }
            printf("2 ");
            Color(15);
        if(CoreLvl==3){
            Color(12);
        }
            printf("3 ");
            Color(15);
        if(CoreLvl==4){
            Color(12);
        }
            printf("4 ");
            Color(15);
        if(CoreLvl==5){
            Color(12);
        }
            printf("5 ");
            Color(15);
        if(CoreLvl==6){
            Color(12);
        }
            printf("6 ");
            Color(15);
        if(CoreLvl==7){
            Color(12);
        }
            printf("7 ");
            Color(15);
        if(CoreLvl==8){
            Color(12);
        }
            printf("8");
            Color(15);


        if(Into == 0 && CoreLvl != 8){
            gotoxy(11,22);
            printf("A%d",CoreLvl-1);
            gotoxy(20,22);
            printf("B%d",CoreLvl-1);
            gotoxy(29,22);
            printf("C%d",CoreLvl-1);
            gotoxy(38,22);
            printf("D%d",CoreLvl-1);
            gotoxy(47,22);
            printf("E%d",CoreLvl-1);
            gotoxy(56,22);
            printf("F%d",CoreLvl-1);
            gotoxy(65,22);
            printf("G%d",CoreLvl-1);
        }else if(CoreLvl == 8 && Into == 0){
            gotoxy(11,22);
            printf("D7");
            gotoxy(20,22);
            printf("E7");
            gotoxy(29,22);
            printf("F7");
            gotoxy(38,22);
            printf("G7");
            gotoxy(47,22);
            printf("A7");
            gotoxy(56,22);
            printf("B7");
            gotoxy(65,22);
            printf("C8");
        }

 i1=0;i2=0;i3=0;i4=0;i5=0;i6=0;i7=0;v1=0;v2=0;v3=0;v4=0;v5=0;v6=0;
    Into=1;


    }

    return 0;
}
