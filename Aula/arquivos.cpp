#include <iostream>
 using namespace std;
 int main(){

/*ofstream out(cavalo coloca nome aqui);
ofstream out;
out.open(cavalos);coloca nome depois*/

//criando
ofstream fout("myfile.dat");
int x= 10;
  if (fout.good())//Vê se abriu direito
  fout<<"x= "<<x<<"\n";
    else cout<<"Não foi possivel gravar no arquivo"<<endl;
return 0; }
