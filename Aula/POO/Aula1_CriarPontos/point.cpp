#include "point.hpp"

Point::Point()
{
  cout<<"Initializing point"<<endl;
  x=0;
  y=0;
}
void Point::SetX(int value)
{
  x = value;
}
  void Point::SetY(int value)
  {
    y = value;
  }

    void Point::ShowInfo()
    {
      cout <<"x: "<< x;
    }