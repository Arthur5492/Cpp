#ifndef _CANDYBOX_HPP
#define _CANDYBOX_HPP
#include "box.hpp"

class CandyBox : public Box
{
private:
protected:
  string m_content;

public:
  CandyBox();
  CandyBox(float a1, float a2=1, float a3=1, string content="") : Box(a1,a2,a3),
  m_content(content){

  };

  //CandyBox(string content, float a1=1, float a2=1, float a3=1) : Box(a1,a2,a3), m_content(content){};

  ~CandyBox();
};

#endif
