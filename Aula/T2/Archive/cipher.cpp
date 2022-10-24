#include "cipher.hpp"

Cipher::Cipher(size_t matricula)
{

    m_myTable = new ConversionTable();
    matricula= matricula%10000;
    int deslocamento = sqrt(matricula);
    m_myTable->InitializeTable(deslocamento);

    //m_myTable->ShowConversionTable();
}

Cipher::~Cipher()
{
  delete m_myTable;
}

void Cipher::NewConversionTable(size_t matricula)
{
size_t k=0,deslocamento=0;
  do{
    deslocamento+=matricula%10;
    matricula/=10;
    k++;
 }while(k<4);
    m_myTable->InitializeTable(deslocamento);

}

string Cipher::Encrypt(string input, size_t matricula)
{
  m_myTable ->encript(input,matricula);
  string cript  = m_myTable->encript(input,matricula);
  return cript;
}

string Cipher::Decrypt(string input, size_t matricula)
{
  m_myTable ->decript(input, matricula);
  string cript  = m_myTable->decript(input,matricula);
  return cript;
}
