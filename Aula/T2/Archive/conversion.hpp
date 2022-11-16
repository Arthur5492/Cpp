#include <iostream>
#include <vector>
#include <utility>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include <cmath>

using namespace std;

class ConversionTable
{
private:
    vector< pair<char,char >> m_table; //Vetor da tabele incriptada e decriptada
    int *m_A;

protected:

public:
  //Construtor e destrutor
    ConversionTable() : m_A(NULL) {};
    ~ConversionTable();

//Funcoes para o cipher usar
    string decript(string input, size_t matricula);
    string encript(string input, size_t matricula);
    void InitializeTable(int deslocamento);
  //  void ShowConversionTable();

};
