#include "conversionTable.hpp"

void ConversionTable::InitializeTable(size_t deslocamento, string matricula)
{
    //como usar a matricula ? como sera a sua estrategia ?
    for(size_t i=0; i<256; i++)
    {
        pair<char,char> p;
        p.first = i;
        p.second = p.first + deslocamento;
        m_table.push_back(p);
    }

    m_A = new int[1024]; //por alguma razao eu quero isso no meu exemplo.

}

//o enunciado diz para nao expor a tabela para o mundo exterior. Aqui vamos imprimir ela meramente para propositos de depuracao e teste. Na versao final deve ser oculta.
void ConversionTable::ShowConversionTable()
{
    for(size_t i=0; i<m_table.size(); i++)
    {
        char orig = m_table.at(i).first;
        char dest = m_table.at(i).second;

        cout << " Orig: " << (char) orig << " - " << (int) orig << " -> " <<
        " Destino: " << (char) dest << " - " << (int) dest << endl;
    }
}

ConversionTable::~ConversionTable()
{
    cout << "Socoro, um destrutor..." << endl;
}
