#include "conversion.hpp"

class Cipher
{
private:
    ConversionTable *m_myTable;
    //outros atributos de sua escolha

protected:

public:
    Cipher() : m_myTable(NULL) {};
    Cipher(string matricula);
    ~Cipher();

    void NewConversionTable(string matricula);
    string Encrypt(string input);
    string Decrypt(string input);
    //outros metodos de sua escolha

};
