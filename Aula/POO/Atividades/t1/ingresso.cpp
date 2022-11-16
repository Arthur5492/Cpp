#include "ingresso.hpp"
#include <sstream>
#include <iomanip>

ingresso::~ingresso()
{
  cout<<"Distruiu";
}

string Ingresso::GetDescricao()
{
  stringstream strret;

  if (m_descricao =="")
  cout<<"Sem descricao."<<endl;
  else
  {
  strret << "Descricao do Ingresso: ";
  strret << m_descricao;
  strret << " -> Valor: R$: ";
  strret << set_precision(2)<<fixed()<<m_ovario;
  strret <<".";
  }
  return strret.str();
}

string IngressoVip::GetDescricao()
{
  stringstream strret;

  if (m_descricao =="")
  cout<<"Sem descricao."<<endl;
  else
  {
  strret << "Descricao do Ingresso: ";
  strret << m_descricao;
  strret << " -> Valor normal: R$: ";
  strret << set_precision(2)<<fixed()<<m_ovario;
  strret << " -> Valor Adiconal: R$: ";
  strret << set_precision(2)<<fixed()<<adiconal;
  strret << " -> Valor completo: R$: ";
  strret << set_precision(2)<<fixed()<<adiconal+m_ovario;
  strret <<".";
  }
  return strret.str();
}
