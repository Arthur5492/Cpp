#include <iostream>
#include <vector>
using namespace std;

enum DataType{tnone, tint, tfloat, tdouble};
class Element
{
private:
  void *m_data;

  //0- NULL 1-int  2- float 3 - double
  DataType  m_type;

public:

  //Forma Rápida
  /*Element() : m_data(NULL), m_type(1)
  {

  };*/
  Element();
  Element(int v);
  Element(float v);
  Element(double v);

  ~Element();

void Showinfo();
};
