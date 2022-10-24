#include "conversion.hpp"

class Cipher
{
private:
    ConversionTable *m_myTable;
    //outros atributos de sua escolha

protected:

public:
    Cipher() : m_myTable(NULL) {};
    Cipher(size_t matricula);
    ~Cipher();

    void NewConversionTable(size_t matricula);
    string Encrypt(string input, size_t matricula);
    string Decrypt(string input, size_t matricula);
    //outros metodos de sua escolha

};
