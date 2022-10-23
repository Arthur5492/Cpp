#include <vector>
#include "point.hpp"

int main()
{
  //Instanciacao
  Point p1;
  Point p2;
  Point p3;

//Usando um meto de acesso do tipo setter
  p1.SetX(10);
  p1.SetY(10);

  p2.SetX(20);
  p2.SetY(20);

  p3.SetX(20);
  p3.SetY(40);

//Chamando metodo qualquer
  p1.ShowInfo();
  p2.ShowInfo();
  p3.ShowInfo();
return 0;
};
