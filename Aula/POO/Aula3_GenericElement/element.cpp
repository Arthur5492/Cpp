#include "element.hpp"

Element::Element()

{
  m_data = NULL;
  m_type = tnone;
}

Element::Element(int v) :Element()
{
  m_data = new int(v);
  m_type = tint;
}

Element::Element(float v) :Element()
{  m_data = new float(v);
  m_type = tfloat;
}

Element::Element(double v) :Element()
{
  m_data = new double(v);
  m_type = tdouble;
}

Element::~Element()
{
  if(m_data)delete (int*)m_data;
}

void Element::Showinfo()
{
  if(m_type==tnone)cout<<"Empty element"<<endl;
    if(m_type==tint)cout<<"Interger -> "<<*(int*)m_data<<endl;
      if(m_type==tfloat)cout<<"Float ->"<<endl;

  // switch (m_type)
  // {
  //   case tnone: cout<<"Empty Element"<<endl;
  //
  //   case tint: cout<<"Interger -> "<<*(int*)m_data<<endl;
  //
  // }
}
