#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

//prototypes
void InsertWord(vector<string> &LocalFile);
void PrintWords(const vector<string> &LocalFile);
bool SearchWord(const vector<string> &LocalFile);
bool RemoveWordByIndex(vector<string>&LocalFile);
vector <size_t> SearchSubstring(const vector<string> &LocalFile);
bool RemoveSubstrings(vector<string> &LocalFile);

//archives prototypes
bool LoadDatabase(string filename,vector<string>&LocalFile);
bool SaveDatabase(string filename, const vector<string>&LocalFile);
int main()
{
  string file;
  vector<string> LocalFileofFiles;

    while(true) //main loop
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
        cout << "--------------------------------------------------" << endl << endl;

        cout << "Select an option: ";

        char ch;
        cin >> ch;
        //conditions or switch case
        if(ch == '1')
        {
          //Cria e entra no arquivo
          cout<<"Enter a file to open: ";
          cin>>file;
          if (LoadDatabase(file,LocalFileofFiles)== false)
          {
            cout<<"Database file not found, creating a new Database."<<endl;
          }

          continue;
        }
        if (LoadDatabase(file,LocalFileofFiles)== false)
        {
          cout<<"Please, select or create a new file first."<<endl;
          continue;
        if(ch == '2')
        {
          PrintWords(LocalFileofFiles);
          continue;
        }

        if(ch == '3')
        {
          SearchWord(LocalFileofFiles);
          continue;
        }
        if(ch == '4')
        {
          vector<size_t> indexes=SearchSubstring(LocalFileofFiles);
          continue;
        }
        if(ch == '5')
        {
          RemoveWordByIndex(LocalFileofFiles);
          continue;
        }
        if(ch=='6')
        {
          RemoveSubstrings(LocalFileofFiles);
          continue;
        }
        if(ch=='7')
        {
          if (SaveDatabase(file, LocalFileofFiles)==false)
          {
            cout<<"Error, unable to sabe database, search for help, you will need"<<endl;
          }
          continue;
        }
        if(ch == '0')
        {
          if (SaveDatabase(file, LocalFileofFiles)==false)
          {
            cout<<"Error, unable to sabe database, search for help, you will need"<<endl;
          }
            break;
        }
      }
    }

    return 0;
}
//Passagem por referencia para atualização/remocao
void InsertWord(vector<string> &LocalFile){
  cout<<"Insert a word: ";
  string str;
  cin>>str;
LocalFile.push_back(str);

//Passagem por referencia para sconsulta(sem copia, const)
}
void PrintWords(const vector<string> &LocalFile){
  cout<<"Print LocalFile of words"<<endl;
  cout<<"LocalFile of word has "<<LocalFile.size()<<" words: "<<endl;

    for (size_t i=0;i<LocalFile.size();i++){
      cout<<"Index"<<i<<"->"<<LocalFile.at(i)<<endl;

    }

}
//Encontrar palavra que está no vetor
bool SearchWord(const vector<string> &LocalFile){
    cout<<"Enter with a word to search: ";
    string query;
    cin>>query;
      for (size_t i=0;i<LocalFile.size();i++)
      {
        if(LocalFile.at(i)==query)
        {
          cout<<"->Word"<<query<<"has found at position"<<i<<endl;
          return true;
        }
          return false;
      }

}
//Remove uma palavra do vector
bool RemoveWordByIndex(vector<string>&LocalFile)
{
  cout<<"Select wich index you want to remove: "<<endl;
  int index;
  bool firstremoval = false;
  cin>>index;
    if(index>=0 && index<LocalFile.size()){
      LocalFile.erase(LocalFile.begin()+index);
      return true;
      firstremoval = true;
    }else{
      cout<<"Idiot @!&#@!&!!"<<endl;
      return false;
    }
return firstremoval;
}

//Encontra palavra por substring
vector <size_t> SearchSubstring(const vector<string> &LocalFile){
  cout<<"Enter wich subword to search"<<endl;
  string str;
  cin>>str;
  vector<size_t> indexes;
  for(size_t i = 0;i<LocalFile.size();i++)
  {
    size_t position =LocalFile.at(i).find(str);
      if (position<LocalFile.at(i).size())
      {
      indexes.push_back(i);
      cout<<"Substring has found:"<<LocalFile.at(i)<<endl;
      }
  }
}

//Remove substrings
bool RemoveSubstrings(vector<string> &LocalFile){
cout<<"Enter wich subword to delete: "<<endl;
string str;
cin>>str;
bool firstremoval= false;
size_t i=0;
while(i<LocalFile.size()){
  size_t position =LocalFile.at(i).find(str);
    if (position<LocalFile.at(i).size())
    {
    cout<<"Substring has found!!, Deleting it!!"<<LocalFile.at(i)<<endl;
    LocalFile.erase(LocalFile.begin()+i);
    firstremoval=true;
    }
    else
    {
      i++;
    }
  }
return firstremoval;
}
//Carrega arquivo
bool LoadDatabase(string filename,vector<string>&LocalFile)
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
  {
    return false;
  }
}
//salva
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
  {
    return false;
  }
}
