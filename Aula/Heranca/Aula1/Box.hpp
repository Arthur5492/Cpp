#ifndef _BOX_HPP
#define _BOX_HPP
#include <iostream>

  using namespace std;

class Box
{
private:

protected:
  float m_lenght, m_height, m_breadth;

public:
  Box();
  Box(float a1, float a2, float a3);

  void Showinfo();

  ~Box();
};

#endif
