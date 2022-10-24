#include "conversion.hpp"

void ConversionTable::InitializeTable(int deslocamento)
{
    for(size_t i=0; i<256; i++)
    {
          pair<char,char> p;
          p.first = i;
          p.second = p.first + deslocamento;
          m_table.push_back(p);
    }

    m_A = new int[1024]; //por alguma razao eu quero isso no meu exemplo.

}

string ConversionTable::decript(string input, size_t matricula)
{
  string result;

  for(size_t i=0; i<input.length(); i++)
  {
      char chi = input.at(i); //input character

      for(size_t j=0; j<m_table.size(); j++)
      {
          if(chi == m_table.at(j).second)
          {
              result += m_table.at(j).first;
              break;
          }
      }
  }
return result;

}

string ConversionTable::encript(string input,size_t matricula)
{
    string result;

        for(size_t i=0; i<input.length(); i++)
        {
            char chi = input.at(i); //input character
            char cho = m_table.at(chi).second;  //output character
            result += cho;
        }
      return result;
}


// void ConversionTable::ShowConversionTable()
// {
//     for(size_t i=0; i<m_table.size(); i++)
//     {
//         char orig = m_table.at(i).first;
//         char dest = m_table.at(i).second;
//
//          cout << " Orig: " << (char) orig << " - " << (int) orig << " -> " <<
//          " Destino: " << (char) dest << " - " << (int) dest << endl;
//     }
// }

ConversionTable::~ConversionTable()
{

}
