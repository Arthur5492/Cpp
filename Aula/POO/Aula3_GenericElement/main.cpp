#include "element.hpp"
int main()
{

  Element e1;
  //int 👌=🪁;
  Element e2((int) 10);
  Element e3((float) 3.1415);
  Element e4((double) 5.55);

  // DataType meutipodedados;
  // meutipodados = tint;

  vector<Element> GenericList;
  GenericList.push_back(e1);
  GenericList.push_back(e2);
  GenericList.push_back(e3);
  GenericList.push_back(e4);

  for(size_t i=0; i<GenericList.size();i++)
  {
    GenericList.at(i).Showinfo();
  }
};
