#include "CandyBox.hpp"

#include <vector>
int main()
{
  // Box b1;
  // CandyBox b2;
  // Box b3(10,5,3);
  // CandyBox b4(2);
  // CandyBox b5(2,4);
  // CandyBox b6(2,4,5);
  // CandyBox b7(2,4,8, "Doces da Vovo");

   int *a = new int[10];

  Box *ListaBox= new Box[10];
    delete []a;


    for (size_t i=0;i<10;i++)
    {
      ListaBox[i].Showinfo();
      delete []ListaBox;
    }




  return 0;
}
