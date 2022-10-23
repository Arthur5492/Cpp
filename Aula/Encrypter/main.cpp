#include <iostream>
#include <vector>
#include <utility>
 using namespace std;

vector<pair<char,char> > CreateConvTable(int disp);
string EncryptText(string input,vector<pair<char,char>>table);
string DecryptText(string input, vector<pair<char,char>>table);

 int main(){

string input = "E era o sapo dentro do saco o saco com o sapo dentro e era o sapo fazendo papo e o papo fazendo vento";



vector<pair<char,char>>convTable = CreateConvTable(3);
/*for(size_t i=0;i<convTable.size();i++)
{
char ori = convTable.at(i).first;
char dest = convTable.at(i).second;

cout<<"Origem: "<<ori<<" - "<<(int) ori<< " ->"<<"Destino: "<<dest<<" - "<< (int) convTable.at(i).second<<endl;
}*/

string encrypted;
encrypted = EncryptText(input, convTable);

cout<<"Encryptted text "<<endl<< encrypted<<endl;

string decrypted;
decrypted = DecryptText(encrypted, convTable);
cout<<"Reverted Text: "<< decrypted<< endl;
return 0;
}



vector<pair<char,char> > CreateConvTable(int disp)
{
  vector<pair<char,char>>table;
  for(size_t i=0;i<256;i++)
  {
    pair<char,char>p;
    p.first =i;
    p.second= p.first+disp;
    table.push_back(p);
  }
  return table;
}

string EncryptText(string input,vector<pair<char,char>>table)
{
  string cryptado;
  for(size_t i=0;i<input.length();i++)
  {

    char chi = input.at(i);
    char cho = table.at(chi).second;
    cryptado +=cho;

  }
return cryptado;
}
string DecryptText(string input, vector<pair<char,char>>table)
{
string decryptado;
for(size_t i=0;i<input.length();i++)
{

  char chi = input.at(i);
  for(size_t j=0;j<table.size();j++)
  {
    if(chi==table.at(j).second)
    decryptado +=table.at(j).first;
  }
  return decryptado;

}

}
