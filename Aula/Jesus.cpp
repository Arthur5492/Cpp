#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

//prototypes
void InsertWord(vector<string> &LocalList);
void PrintWords(const vector<string> &LocalList);
bool SearchWord(const vector<string> &LocalList);
bool RemoveWordByIndex(vector<string>&LocalList);
vector <size_t> SearchSubstring(const vector<string> &LocalList);
bool RemoveSubstrings(vector<string> &LocalList);

//archives prototypes
bool LoadDatabase(string filename,vector<string>&LocalList);
bool SaveDatabase(string filename, const vector<string>&LocalList);
int main()
{
    vector<string> LocalListOfWords;
    if (LoadDatabase("database.txt",LocalListOfWords)== false)
    {
      cout<<"Database file not found, creating a new Database."<<endl;
    }
    while(true) //main loop
    {
        cout << "--------------------------------------------------" << endl;
        cout << "UFxC String Store V.0" << endl;
        cout << "1. Insert string" << endl;
        cout << "2. Print index and string" << endl;
        cout << "3. Search string (literalpos)" << endl;
        cout << "4. Search substrings" << endl;
        cout << "5. Remove (by index)" << endl;
        cout << "6. Remove by substrings (all occurrences)" << endl;
        cout << "7. Save archive"<<endl;
        cout << "0. Quit" << endl;
        cout << "--------------------------------------------------" << endl << endl;

        cout << "Select an option: ";

        char ch;
        cin >> ch;

        //conditions or switch case
        if(ch == '1')
        {
          InsertWord(LocalListOfWords);
              continue;
        }
        if(ch == '2')
        {
          PrintWords(LocalListOfWords);
            continue;
        }

        if(ch == '3')
        {
          SearchWord(LocalListOfWords);
            continue;
        }
        if(ch == '4')
        {
          vector<size_t> indexes=SearchSubstring(LocalListOfWords);
            continue;
        }
        if(ch == '5')
        {
          RemoveWordByIndex(LocalListOfWords);
            continue;
        }
        if(ch=='6')
        {
          RemoveSubstrings(LocalListOfWords);
          continue;
        }
        if(ch=='7')
        {
          if (SaveDatabase("database.txt", LocalListOfWords)==false)
          {
            cout<<"Error, unable to sabe database, search for help, you will need"<<endl;
          }
          continue;
        }
        if(ch == '0')
        {
          if (SaveDatabase("database.txt", LocalListOfWords)==false)
          {
            cout<<"Error, unable to sabe database, search for help, you will need"<<endl;
          }
            break;
        }


    }

    return 0;
}
//Passagem por referencia para atualização/remocao
void InsertWord(vector<string> &LocalList){
  cout<<"Insert a word: ";
  string str;
  cin>>str;
LocalList.push_back(str);

//Passagem por referencia para sconsulta(sem copia, const)
}
void PrintWords(const vector<string> &LocalList){
  cout<<"Print LocalList of words"<<endl;
  cout<<"LocalList of word has "<<LocalList.size()<<"words: "<<endl;

    for (size_t i=0;i<LocalList.size();i++){
      cout<<"Index"<<i<<"->"<<LocalList.at(i)<<endl;

    }

}
//Encontrar palavra que está no vetor
bool SearchWord(const vector<string> &LocalList){
    cout<<"Enter with a word to search: ";
    string query;
    cin>>query;
      for (size_t i=0;i<LocalList.size();i++)
      {
        if(LocalList.at(i)==query)
        {
          cout<<"->Word"<<query<<"has found at position"<<i<<endl;
          return true;
        }
          return false;
      }

}
//Remove uma palavra do vector
bool RemoveWordByIndex(vector<string>&LocalList)
{
  cout<<"Select wich index you want to remove: "<<endl;
  int index;
  bool firstremoval = false;
  cin>>index;
    if(index>=0 && index<LocalList.size()){
      LocalList.erase(LocalList.begin()+index);
      return true;
      firstremoval = true;
    }else{
      cout<<"Idiot @!&#@!&)"<<endl;
      return false;
    }
return firstremoval;
}

//Encontra palavra por substring
vector <size_t> SearchSubstring(const vector<string> &LocalList){
  cout<<"Enter wich subword to search"<<endl;
  string str;
  cin>>str;
  vector<size_t> indexes;
  for(size_t i = 0;i<LocalList.size();i++)
  {
    size_t position =LocalList.at(i).find(str);
      if (position<LocalList.at(i).size())
      {
      indexes.push_back(i);
      cout<<"Substring has found:"<<LocalList.at(i)<<endl;
      }
  }
}

//Remove substrings
bool RemoveSubstrings(vector<string> &LocalList){
cout<<"Enter wich subword to delete: "<<endl;
string str;
cin>>str;
bool firstremoval= false;
size_t i=0;
while(i<LocalList.size()){
  size_t position =LocalList.at(i).find(str);
    if (position<LocalList.at(i).size())
    {
    cout<<"Substring has found!!, Deleting it!!"<<LocalList.at(i)<<endl;
    LocalList.erase(LocalList.begin()+i);
    firstremoval=true;
    }
    else
    {
      i++;
    }
  }
return firstremoval;
}

bool LoadDatabase(string filename,vector<string>&LocalList)
{
  ifstream filereader(filename);
  if(filereader.good())
  {
    string tmp;
    while(getline(filereader,tmp))
    {
      LocalList.push_back(tmp);
    }
    filereader.close();
    return true;
  }
  else
  {
    return false;
  }
}
bool SaveDatabase(string filename, const vector<string>&LocalList)
{
  ofstream filewritter(filename);
  if(filewritter.good())
  {
    for(size_t i=0;i<LocalList.size();i++)
    {
      filewritter<<LocalList.at(i)<<endl;
    }
    filewritter.close();
    return true;
  }
  else
  {
    return false;
  }
}
