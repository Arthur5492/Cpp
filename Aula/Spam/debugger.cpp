#include <iostream>
#include <vector>
 using namespace std;
 int main(){

cout<<"Hellow wolrld"<<endl;

int v;
v = 10;

vector<int> lista;
lista.push_back(10);
lista.push_back(20);
lista.push_back(30);
lista.push_back(40);

for(size_t i=0;i<lista.size();i++)
{
  cout<<"Indice"<<i<<" ->"<<lista.at(i)<<endl;
}
return 0; }
/*Default key bindings (with GDB/CLI equivalents)
F12 Activate package and start GDB
F5 Resume target execution (continue)
Shift-F5 Interrupt target execution (Ctrl-C/interrupt)
F9 Toggle breakpoint on current line in editor (break/delete)
F10 Single step, over function calls (next)
F11 Single step, into function calls (step)
Shift-F11 Resume until return of current function (finish)*/
