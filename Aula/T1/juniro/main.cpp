#include <iostream>
#include <vector>
#include <fstream>
#include <utility>
#include <string>

using namespace std;

bool LoadFile(string filename, vector<string> &words);

int main()
{

    vector<string> words;
    pair < string, vector<string>> wordsOfV;
    vector <pair <string, vector< string >>> AllPairs;

    for (;;)
    {
        cout << "--------------------------------------------------" << endl;
        cout << "FILE MANIPULATOR HACK" << endl;
        cout << "Select an option:" << endl;
        cout << "1. Open a File.." << endl;
        cout << "2. Search for Substrings..." << endl;
        cout << "3. Remove Words Containing a Substrings" << endl;
        cout << "4. Remove all Repeated words" << endl;
        cout << "5. Show Statistics" << endl;
        cout << "6. Quit" << endl;
        cout << "--------------------------------------------------" << endl;

        char ch;
        cin >> ch;

        if (ch == '1')
        {

            cout << "Digite o Nome do Arquivo a ser Lido:" << endl;
            string arq;
            cin >> arq;

            LoadFile(arq, words);

            wordsOfV.first = arq;
            wordsOfV.second = words;

            AllPairs.push_back(wordsOfV);

            words.clear();

            continue;

        }
        if (ch == '2')
        {
            cout << "Digite para pesquisar a substring:" << endl;
            string arq;
            cin >> arq;

            for(size_t i = 0; i < AllPairs.size(); i++){

               for(size_t j=0; j< AllPairs.at(i).second.size(); j++){

                 string word = AllPairs.at(i).second.at(j);
                 size_t pos = word.find(arq);
                 if(pos < word.length()){

                cout << AllPairs.at(i).second.at(j) << endl;


                 }


               }
            }

            continue;
        }
        if (ch == '3')
        {

            cout << "Digite para deletar a substring:" << endl;
            string arq;
            cin >> arq;

            for(size_t i = 0; i < AllPairs.size(); i++){

               for(size_t j=0; j< AllPairs.at(i).second.size(); j++){

                 string word = AllPairs.at(i).second.at(j);
                 size_t pos = word.find(arq);
                 if(pos < word.length()){

                 AllPairs.at(i).second.at(j).erase();

                 }


               }
            }

            continue;
        }
        if (ch == '4')
        {

            cout << "Digite para deletar a palavra repetida:" << endl;
            string arq;
            cin >> arq;

            size_t marq = 0;

            for(size_t i = 0; i < AllPairs.size(); i++){

               for(size_t j=0; j< AllPairs.at(i).second.size(); j++){

                 if(marq == 0 && arq == AllPairs.at(i).second.at(j)){

                 marq = 1;

                 }else{
                 if(marq == 1 && arq == AllPairs.at(i).second.at(j) ){

                 AllPairs.at(i).second.at(j).erase();
                 AllPairs.at(i).second.at(j).erase();
                 marq = 1;

                 }
                 }
               }
            }

            marq = 0;
            continue;

        }
        if (ch == '5')
        {
            cout << endl;
            size_t vz = 0;
            for(size_t i = 0; i < AllPairs.size(); i++){

            size_t m = 0;

            cout << AllPairs.at(i).first << " has ";

             for(size_t j=0; j< AllPairs.at(i).second.size(); j++){

               if(AllPairs.at(i).second.at(j).length() == 0){

                m++;

               }
               }

             cout << AllPairs.at(i).second.size()-m << " words" << endl;

             m = 0;

            }

        continue;

        }
        if (ch == '6')
        {

            ofstream fileWriter;
            fileWriter.open("concatenation.txt");

            for(size_t i = 0; i < AllPairs.size(); i++){

               for(size_t j=0; j< AllPairs.at(i).second.size(); j++){

               if(AllPairs.at(i).second.at(j).length() != 0){
               fileWriter << AllPairs.at(i).first << "  " << AllPairs.at(i).second.at(j) <<  endl;
               }
               }

               cout << endl;
            }


            break;
        }

        return 0;
        }

}



bool LoadFile(string filename, vector<string> &words)
{
    ifstream fileReader(filename);
    if (fileReader.is_open())
    {
        string tmp;
        while (getline(fileReader, tmp))
        {

            cout << tmp << endl;
            words.push_back(tmp);
        }

    }
    else
    {
        cout << "Error, cannot open file" << endl;
        return false;
    }

    fileReader.close();
    return true;
}
