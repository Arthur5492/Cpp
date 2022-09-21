#include <iostream>
#include <vector>

using namespace std;

//prototypes
void InsertWord(vector<string> &LocalList);
void PrintWords(const vector<string> &LocalList);
bool SearchWord(const vector<string> &LocalList);
bool RemoveWordByIndex(vector<string>&LocalList);
bool SearchSubstring(const vector<string> &LocalList);
int main()
{
    vector<string> LocalListOfWords;

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
            continue;
        }
        if(ch == '5')
        {
          RemoveWordByIndex(LocalListOfWords);
            continue;
        }
        if(ch=='6')
        {

          continue;
        }
        if(ch == '0')
        {
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
  cin>>index;
    if(index>=0 && index<LocalList.size()){
      LocalList.erase(LocalList.begin()+index);
      return true;
    }else{
      cout<<"Idiot @!&#@!&)"<<endl;
      return false;
    }

}
bool SearchSubstring(const vector<string> &LocalList){
  cout<<"Enter wich subword to search"

}
