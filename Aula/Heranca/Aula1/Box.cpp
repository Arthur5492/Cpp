#include "box.hpp"

  Box::Box()
{
  m_lenght=0; m_breadth=0; m_height=0;
    cout<<"Hi, I'm the Box constructor!"<<endl;
}

Box::Box(float a1, float a2, float a3)
{
  m_lenght = a1;
  m_breadth = a2;
  m_height= a3;
}

void Box::Showinfo()
{
    cout<<"Lambda: "<<m_lenght<<m_breadth<<m_height<<endl;
}

Box::~Box()
{
  cout<<"I'm dying :("<<endl;
}
