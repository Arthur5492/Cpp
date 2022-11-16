#include <iostream>
#include <vector>
#include <fstream>
#include <utility>
#include <algorithm>

using namespace std;

bool OpenFile (string FileName, vector<string> &words);


int main()
{
    vector<string> words;
    pair < string, vector<string>> pair1;
    vector <pair <string, vector< string >>> AllPairs;

    while(true)
    {
        cout << "---------------------------------------------------------" << endl;
        cout << "FILE MANIPULATOR HACK - Milton Pacheco" << endl;
        cout << "Select an option:\n" << endl;
        cout << "1. Open a File.." << endl;
        cout << "2. Search for Substrings..." << endl;
        cout << "3. Remove Words Containing a Substrings" << endl;
        cout << "4. Remove all Repeated words" << endl;
        cout << "5. Show Statistics" << endl;
        cout << "6. Quit" << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << "Option: ";

        char option;
        cin >> option;

        if (option == '1')
        {
            ofstream arquivo;

            cout << "Enter with a file to open:" << endl;
            string file;
            cin >> file;

            OpenFile(file, words);

            pair1.first = file;
            pair1.second = words;

            AllPairs.push_back(pair1);

            words.clear();

            continue;
        }

        if (option == '2')
        {
            cout << "Enter a Substring to Search: " << endl;
            string str;
            cin >> str;

            for (size_t i=0; i<AllPairs.size(); i++)
            {
                for (size_t j=0; j<AllPairs.at(i).second.size(); j++)
                {
                    string w = AllPairs.at(i).second.at(j);
                    size_t position = w.find(str);
                    if (position < w.length())
                    {
                        cout << "File " <<AllPairs.at(i).first << " has substring "<< "'" << str << "': " << AllPairs.at(i).second.at(j) << endl;
                    }
                }
            }

            continue;
        }

        if (option == '3')
        {
            cout << "Enter a Substring to Remove All Occurrences: " << endl;
            string str;
            cin >> str;

            for (size_t i=0; i<AllPairs.size(); i++)
            {
                for (size_t j=0; j<AllPairs.at(i).second.size(); j++)
                {
                    size_t position = AllPairs.at(i).second.at(j).find(str);

                    if (position < AllPairs.at(i).second.at(j).length())
                    {
                        AllPairs.at(i).second.erase(AllPairs.at(i).second.begin()+j);
                    }
                }
            }
            continue;
        }

        if (option == '4')
        {
            for(size_t i=0; i< AllPairs.size(); i++)
            {
                for(size_t j=0;j<AllPairs.at(i).second.size();j++)
                {
                    for(size_t k=j+1;k<AllPairs.at(i).second.size();k++)
                    {
                        if(AllPairs.at(i).second.at(k).find(AllPairs.at(i).second.at(j))!=string::npos)
                        {
                            AllPairs.at(i).second.erase(AllPairs.at(i).second.begin()+k);
                            AllPairs.at(i).second.erase(AllPairs.at(i).second.begin()+j);
                        }
                    }
                }
            }
            continue;
        }

        if (option == '5')
        {
            cout << "File Manipulator Hack Statistics: " << endl;

            for (size_t i=0; i<AllPairs.size(); i++)
            {
                cout << AllPairs.at(i).first << " has " << AllPairs.at(i).second.size() << " words" << endl;
            }
            continue;
        }

        if (option == '6')
        {
            ofstream fileWriter;
            fileWriter.open("concatenation.txt");

            for(size_t i = 0; i < AllPairs.size(); i++)
            {
                for(size_t j=0; j< AllPairs.at(i).second.size(); j++)
                {
                    fileWriter << AllPairs.at(i).first << " -> " << AllPairs.at(i).second.at(j) <<  endl;
                }
            }
            break;
        }
    }

    return 0;
}


bool OpenFile (string FileName, vector<string> &words)
{
    ifstream FileIn;
    FileIn.open(FileName);
    if (FileIn.is_open())
    {
        string reader;
        while(getline(FileIn, reader))
        {
            cout << reader << endl;
            words.push_back(reader);
        }
    }
    else
    {
        cout << "Error" << endl;
        return false;
    }
    cout << "File"<< " '" << FileName << "' " << "uploaded successfully" << endl;
    FileIn.close();
    return true;
}
