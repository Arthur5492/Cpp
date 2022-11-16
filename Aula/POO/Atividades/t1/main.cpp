#include "ingresso.hpp"

int main()
{
char ch;

cout<<"Bem vindo ao CineUFSC!!"<<endl<<endl;
sleep(1);
cout<<("O seu ingresso e vip?")<<endl<<
"y = sim"<<endl<<
"n = nao"<<endl;
cin>>ch;


ingresso i1;
ingresso i2("Matrix");
ingresso i3("Pistoleiro papaco e o  resgate", 40);

ingresso i4("Internet o filme");
ingresso i4("Internet o filme","Piroca, refri");

  return 0;
}
