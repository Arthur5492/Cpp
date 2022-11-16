#include "conversion.hpp"

class Cipher
{
private:
    ConversionTable *m_myTable; //Variavel que pega a matricula

protected:

public:
    Cipher() : m_myTable(NULL) {}; //Construtores e destrutores
    Cipher(size_t matricula);
    ~Cipher();

//Funcoes
    void NewConversionTable(size_t matricula);
    string Encrypt(string input, size_t matricula);
    string Decrypt(string input, size_t matricula);
    

};
