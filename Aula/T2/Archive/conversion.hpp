#include <iostream>
#include <vector>
#include <utility>

using namespace std;

class ConversionTable
{
private:
    vector< pair<char,char >> m_table;

    //outros atributos de sua escolha, se forem DINAMICOS serah um plus na nota no quesito complexidade
    int *m_A;

protected:

public:
    ConversionTable() : m_A(NULL) {};
    ~ConversionTable();

    void InitializeTable(size_t deslocamento, string matricula); //aqui os parametros irao depender da estrategia utilizada
    void ShowConversionTable();
    //outros metodos de sua escolha

};
