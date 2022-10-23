#include "cipher.hpp"

Cipher::Cipher(string matricula)
{
    //aqui serah criado o objeto conversionTable e inicializado de acordo com sua estrategia
    m_myTable = new ConversionTable();
    m_myTable->InitializeTable(10, matricula);  //primeiro parametro deslocamento original, se ainda houver na sua estrategia

    m_myTable->ShowConversionTable();  //o enunciado diz para nao expor a tabela para o mundo exterior. Aqui vamos imprimir ela meramente para propositos de depuracao e teste. Na versao final deve ser oculta.
}

Cipher::~Cipher()
{
}

void Cipher::NewConversionTable(string matricula)
{
    //refazer a conversion table de alguma forma, cuidado com a realocacao de for necessario.
    cout << "estou criando uma nova conversion table, soh que naum" << endl;
}

string Cipher::Encrypt(string input)
{
    cout << "aqui vou encriptar meu texto com a m_myTable, serah que ela tem metodos de acesso para eu passar um char e ela me devolver o char de substituicao ?  hummmmm...." << endl;

    string output = "haha";
    return output;
}

string Cipher::Decrypt(string input)
{
    cout << "aqui vou decriptar meu texto com a m_myTable, serah que ela tem metodos de acesso para eu passar um char e ela me devolver o char original ?  hummmmm...." << endl;

    string output = "hehe";
    return output;
}



