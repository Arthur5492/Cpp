#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <utility>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

//File Open

bool LoadArchive(string NomeArquivo, vector<string>&Palavras);
bool FileCheck(string NomeArquivo, vector<string>&Palavras);
bool Substring(vector<pair<string, vector<string>>>&TodosArquivos, string procurar);
bool DeleteSubstring(vector<pair<string, vector<string>>>&TodosArquivos, string procurar);
void ShowWords(vector<pair<string, vector<string>>>&procurar);
bool RepeatWords(vector<pair<string, vector<string>>>&procurar);
void Statistic(vector<pair<string, vector<string>>>&procurar);
bool Concatenation(vector<pair<string, vector<string>>>&procurar);



int main()
{
  char opcao;
  string GuardarArquivo;
  vector<string>Palavras;
  pair<string,vector<string>>ConteudoArquivos;
  vector<pair<string, vector<string>>>TodosArquivos;

  while(true) // loop
  {
  cout << "--------------------------------------------------" << endl;
  cout << "FILE MANIPULATOR HACK" << endl;
  cout << "Select an option:" << endl;
  cout << "1. Open a File" << endl;
  cout << "2. Search for Substrings" << endl;
  cout << "3. Remove Words Containing a Substring" << endl;
  cout << "4. Remove all Repeated Words" << endl;
  cout << "5. Show Statistics" << endl;
  cout << "6. Exit" << endl;
  cout << "--------------------------------------------------" << endl;

  cout << "Escolha uma opcao: ";
  cin >> opcao;

  // condições

    if(opcao == '1')
    {
      cout << "Qual o nome do Arquivo? ";
      cin >> GuardarArquivo;

      LoadArchive(GuardarArquivo, Palavras);
      ConteudoArquivos.first =GuardarArquivo;
      ConteudoArquivos.second = Palavras;
      TodosArquivos.push_back(ConteudoArquivos);
      Palavras.clear();
      continue;
    }

    if (opcao =='2')
    {
      if(FileCheck(GuardarArquivo, Palavras)==false) continue;
      string procurar;
      cout << " Digite a Substring: ";
      cin >> procurar;

      bool find = Substring(TodosArquivos, procurar);
      if(find == true)
      cout << " Nenhuma silaba digitada foi encontrada no banco de dados. " << endl;

      continue;
    }

    if (opcao =='3')
    {
      string procurar;
      cout << "Digite a Substring to erase: ";
      cin >> procurar;
      if(FileCheck(GuardarArquivo, Palavras)==false) continue;
      DeleteSubstring(TodosArquivos, procurar);
      continue;
    }

    if (opcao =='4')
    {
      if(FileCheck(GuardarArquivo, Palavras)==false) continue;
      RepeatWords(TodosArquivos);

      continue;
    }

    if (opcao =='5')
    {
      if(FileCheck(GuardarArquivo, Palavras)==false) continue;
      Statistic(TodosArquivos);
      continue;
    }

    if (opcao =='6')
    {
      if(FileCheck(GuardarArquivo, Palavras)==false) continue;
      Concatenation(TodosArquivos);
      // break;
    }
      else
      {
      cout<<"PLEASE INSERT A VALID NUMBER!! "<<endl;
      continue;
      }
  }
return 0;
}


  void ShowWords(vector<pair<string, vector<string>>>&procurar)
  {

  for(size_t i=0; i<procurar.size(); i++){ //busca no vetor
    for(size_t j=0; j<procurar.at(i).second.size(); j++){ //busca especificamente no segundo par contido no vetor
      if(procurar.at(i).second.at(j) != "") //se a palavra não estiver vazia, a imprime na tela
      cout<<procurar.at(i).first<<" -> "<<procurar.at(i).second.at(j)<<endl;
      }
    }
  }
  bool LoadArchive(string NomeArquivo, vector<string>&Palavras)
  {
    ifstream filereader(NomeArquivo);
    if(filereader.good())
    {
      string Guardar;
      while(getline(filereader, Guardar))
      {
        Palavras.push_back(Guardar);
      }
      filereader.close();
      for(size_t i = 0;i<Palavras.size();i++)
      {
        cout<<i<<" -> "<<Palavras.at(i)<<endl;
      }
      return true;
    }
    else
    return false;
  }

  bool FileCheck(string NomeArquivo, vector<string>&Palavras)
  {
    ifstream filewritter(NomeArquivo);
    if(filewritter.good())
    return true;
    else {
    cout<<"Please insert a file first, SLAYyyy."<<endl;
    return false;
    }
  }

  bool Substring(vector<pair<string, vector<string>>>&TodosArquivos, string procurar)
  {

    bool check = false;
    for(int i=0; i<TodosArquivos.size(); i++)
    {
      for(int j=0; j<TodosArquivos.at(i).second.size(); j++)
      {
        if(TodosArquivos.at(i).second.at(j).find(procurar)!=string::npos)
        {
          bool check = true;
          cout << TodosArquivos.at(i).first<< " tem a Substring -> " << procurar << " : "<< TodosArquivos.at(i).second.at(j) << endl;
        }
      }
    }
    return check;
  }

  bool DeleteSubstring(vector<pair<string, vector<string>>>&TodosArquivos, string procurar)
  {

    bool check = false;
    for(int i=0; i<TodosArquivos.size(); i++)
    {
      for(int j=0; j<TodosArquivos.at(i).second.size(); j++)
      {
        if(TodosArquivos.at(i).second.at(j).find(procurar)!=string::npos)
        {
          bool check = true;
          cout<<"A palavra ->"<<TodosArquivos.at(i).second.at(j)<< " foi deletada."<<endl;
          TodosArquivos.at(i).second.at(j).erase();
        }
      }
    }
    return check;
  }

  bool RepeatWords(vector<pair<string, vector<string>>>&procurar)
    {
      bool check = false;
      for(size_t i=0; i<procurar.size(); i++)
      {
        for(size_t j=0; j<procurar.at(i).second.size(); j++)
        {
          for(size_t k=0; k<procurar.size(); k++)
          {
            for(size_t l=0; l<procurar.at(k).second.size(); l++)
            {
              if(i==k && j==l);
                else if(procurar.at(k).second.at(l)==procurar.at(i).second.at(j))
                {
                  cout<<"Removida: "<< procurar.at(k).second.at(l)<<endl;
                  procurar.at(k).second.erase(procurar.at(k).second.begin()+l);
                  check = true;
                }
            }
          }
        }

      }

  if(check == true)cout<<"Todas as palavras repetidas foram apagadas"<<endl;
      else cout<<"Nao ha nenhuma palavra repetida"<<endl;
  }

  void Statistic(vector<pair<string, vector<string>>>&procurar)
  {
    for(size_t i=0; i<procurar.size(); i++)
    {
      cout << procurar.at(i).first << " tem ";
      size_t contagem=0;


      for(size_t j=0; j<procurar.at(i).second.size(); j++)
      {
        if(procurar.at(i).second.at(j).length() == '\0') contagem++;
      }
      cout << procurar.at(i).second.size()-contagem << " palavras. " << endl;
        contagem=0;
    }
    ShowWords(procurar);
  }

bool Concatenation(vector<pair<string, vector<string>>>&procurar)
{
  bool check = false;
  ofstream filewritter;
  filewritter.open("concatenation.txt");

  for(size_t i=0; i<procurar.size(); i++)
  {
    for(size_t j =0 ;j<procurar.at(i).second.size();j++)
    {
      if(procurar.at(i).second.at(j).size()!=0)
      {
        filewritter << procurar.at(i).second.at(j) << endl;
        check = true;
      }
    }
  }
  if(check=false) cout << "Ocorreu algum problema." << endl;
  else cout << "Arquivo salvo com exito." << endl;
}
