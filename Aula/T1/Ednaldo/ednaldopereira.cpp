#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <utility>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

//prototypes
void PrintWords(vector<pair<string,vector<string>>>&LocalFile);
void RemoveRepeated(vector<pair<string,vector<string>>>&LocalFile);
bool SearchSubstring(vector<pair<string,vector<string>>>&LocalFile, string search);
bool RemoveSubstrings(vector<pair<string,vector<string>>>&ListofFiles, string search);
void ShowStatistcs(vector<pair<string,vector<string>>>&LocalFile);
void FilesConcatenation(vector<pair<string,vector<string>>>&LocalFile);

//archives prototypes
bool LoadDatabase(string filename,  vector<string>&LocalFile);
bool SaveDatabase(string filename, const vector<string>&LocalFile);
bool FileCheck(string file, const vector<string>&LocalFile);

int main()
{
  string file;
  char ch; //variável de seleção
  vector<string> ListofStrings;                       // vetor auxiliar que armazena
  pair<string, vector<string>> files;                 // pair com o nome do arquivo e vetor de palavras
  vector<pair<string, vector<string>>> ListofFiles;   // vetor contendo file por file
    while(true) //loop principal
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

        cout << "Select an option: ";
        cin >> ch;

        //condições
        if(ch == '1')
        {
          //Cria e entra no arquivo
          cout<<"Enter with a file to open: ";
          cin>>file;
          LoadDatabase(file,ListofStrings); //abre o arquivo desejado
          files.first = file;
          files.second = ListofStrings;
          ListofFiles.push_back(files); //adiciona o novo arquivo ao ListofFiles
          ListofStrings.clear();

          PrintWords(ListofFiles);
          continue;
        }

        if(ch == '2')
        {
          if(FileCheck(file, ListofStrings)==false)continue;
          cout << "Enter a Substring to Search: " << endl;

          string search;
          cin >> search;

          bool find=SearchSubstring(ListofFiles, search);
          if (find==false) //retorno da variável de busca da função
          cout<<"The is no " << search << "! Try another substring." << endl;

          continue;
        }

        if(ch == '3')
        {
        if(FileCheck(file, ListofStrings)==false)continue;
        cout << "Enter a substring to remove all occurrences: " << endl;

        string search;
        cin >> search;

        bool find=RemoveSubstrings(ListofFiles, search);
        if (find==false) //retorno da variável de busca da função
        cout<<"The is no " << search << "! Try another substring." << endl;
        continue;
      }

        if(ch == '4')
        {
          if(FileCheck(file, ListofStrings)==false)continue;
          RemoveRepeated(ListofFiles);
          continue;
        }

        if(ch == '5')
        {
          if(FileCheck(file, ListofStrings)==false)continue;
          ShowStatistcs(ListofFiles);
          continue;
        }

        if(ch=='6')
        {
          if(FileCheck(file, ListofStrings)==false)continue;
          FilesConcatenation(ListofFiles);
          break; //quebra o loop principal
        }

        if(ch=='7')
        {
          if(FileCheck(file, ListofStrings)==false)continue;
          PrintWords(ListofFiles);
          continue;
        }
        else //se 'ch' for diferente das opções válidas (1, 2, 3, 4, 5 ou 6)
        cout<<"Please, insert a valid number!" << endl;
    }
    return 0;
}

//Passagem por referencia para consulta
void PrintWords(vector<pair<string,vector<string>>>&LocalFile){
  cout<<"ListofFiles has "<<LocalFile.size()<<" file(s):"<<endl;

for (size_t i=0;i<LocalFile.size();i++){ //busca no vetor
  for(size_t j=0;j<LocalFile.at(i).second.size();j++){ //busca especificamente no segundo par contido no vetor
    if(LocalFile.at(i).second.at(j) != "") //se a palavra não estiver vazia, a imprime na tela
cout<<LocalFile.at(i).first<<" -> "<<LocalFile.at(i).second.at(j)<<endl;
    }
  }
}

//Mostra as estatísticas dos files (quantidade de palavras)
void ShowStatistcs(vector<pair<string,vector<string>>>&LocalFile)
{
  cout<< "File Manipulator Hack Statistics:" << endl;

  for(size_t i = 0; i < LocalFile.size(); i++){
  size_t num = 0; //inicia a variável de manipulação
  cout << LocalFile.at(i).first << " has ";
   for(size_t j=0; j< LocalFile.at(i).second.size(); j++){
     if(LocalFile.at(i).second.at(j).length() == '\0'){
     num++;} //toda vez que a string for nula, a variável aumenta
     }

   cout << LocalFile.at(i).second.size()-num << " words" << endl; //retira as strings vazias
   num = 0; //reinicia a variável
  }
}

//Encontra palavra por substring
bool SearchSubstring(vector<pair<string,vector<string>>>&ListofFiles, string search)
{
  bool find = false; //criação de uma variável para o caso de successo na busca
    for(size_t i=0; i< ListofFiles.size(); i++){ //busca pelos files
      for(size_t j=0;j<ListofFiles.at(i).second.size();j++){ //busca pelas palavras dentro dos files
        if(ListofFiles.at(i).second.at(j).find(search)!=string::npos)
        {
          find = true;
          cout<<ListofFiles.at(i).first<<" has substring "<< search << ": " << ListofFiles.at(i).second.at(j)<<endl;
        }
        }
    }
    return find;
}

void RemoveRepeated(vector<pair<string,vector<string>>>&LocalFile)
{
  for(size_t i=0; i< LocalFile.size(); i++)//Percorre os files
  {
    for(size_t j=0;j<LocalFile.at(i).second.size();j++)//Verifica a palavra a ser verificada(se é repitida)
    {
      for(size_t k=j+1;k<LocalFile.at(i).second.size();k++)//Passa para a proxima palavra do vetor de palavras
      {
        if(LocalFile.at(i).second.at(k).find(LocalFile.at(i).second.at(j))!=string::npos)
        //Se a palavra da posição j, for igual a da posição k, faça:
        {
          LocalFile.at(i).second.erase(LocalFile.at(i).second.begin()+k);
        }
      }
    }
  }
}

//Remove todas as ocorrências da substring desejada
bool RemoveSubstrings(vector<pair<string,vector<string>>>&ListofFiles, string search)
{
  bool find = false; //criação de uma variável para o caso de successo na busca
    for(size_t i=0; i< ListofFiles.size(); i++){ //busca pelos files
      for(size_t j=0;j<ListofFiles.at(i).second.size();j++){ //busca pelas palavras dentro dos files
        if(ListofFiles.at(i).second.at(j).find(search)!=string::npos)
        {
          find = true;
          cout<<"Substring " << search << " was found!! Deleting string " <<
          ListofFiles.at(i).second.at(j) << endl;
          ListofFiles.at(i).second.at(j).erase(); //deleta as strings que contêm a substring
        }
        }
    }
    return find; //retorna a variável para a função main
}

//Carrega arquivo
bool LoadDatabase(string filename, vector<string>&LocalFile)
{
  ifstream filereader(filename);
  if(filereader.good())
  {
    string tmp;
    while(getline(filereader,tmp))
    {
      LocalFile.push_back(tmp);
    }
    filereader.close();
    return true;
  }
  else
  return false;
}

//Salva o arquivo
bool SaveDatabase(string filename, const vector<string>&LocalFile)
{
  ofstream filewritter(filename);
  if(filewritter.good())
  {
    for(size_t i=0;i<LocalFile.size();i++)
    {
      filewritter<<LocalFile.at(i)<<endl;
    }
    filewritter.close();
    return true;
  }
  else
  return false;
}

//Checa se o arquivo está aberto
bool FileCheck(string file, const vector<string>&LocalFile)
{
  ifstream filewritter(file);
  if (filewritter.good()) //checa se o arquivo está aberto
  return true;

  else{
  cout<<"Please, select or create a new file first. DUMBASS!"<<endl;
  return false;}
}

//Concatena todas as palavras do ListofFiles em um arquivo "concatenation.txt"
void FilesConcatenation(vector<pair<string,vector<string>>>&LocalFile)
{
  ofstream filewritter;
  filewritter.open("concatenation.txt"); //abre um novo arquivo

  for(size_t i=0; i<LocalFile.size(); i++){
     for(size_t j=0; j<LocalFile.at(i).second.size(); j++){
     if(LocalFile.at(i).second.at(j).size() != 0){
     filewritter << LocalFile.at(i).second.at(j) << endl;}} //passa as palavras dos arquivos linha por linha
     cout << endl;
  }
}
