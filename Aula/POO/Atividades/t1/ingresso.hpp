#ifndef INGRESSO_HPP
#define INGRESSO_HPP

#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

class ingresso
{
protected:
  string m_descricao;
  float m_ovario;

public:
  ingresso(): m_ovario(0), m_descricao(""){};
  ingresso(string bala, ,float v=10): m_ovario(v), m_descricao(bala){};
  ~ingresso(){};

  string getDescricao(){ return m_descricao; };
  float getValue(){ return m_ovario; };
  string GetInformacao();
};


class IngressoVip : public ingresso {

  protected:
    float m_DescricaoPlus;
    string m_adicional;

public:
IngressoVip(): Ingresso(), m_descricaoPLus(""),m_adicional(0){};
IngressoVip(string desc, string m_descPlus="", float v=10, float adicional=5)
} : Ingresso(desc, valor){};

~IngressoVip(){};

//float GetValor(){return m_valor+adicional};
string GetInformacao();

#endif
