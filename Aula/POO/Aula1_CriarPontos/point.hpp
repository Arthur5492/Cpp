#include <iostream>

using namespace std;

  class Point
  {

    //Atributos / estados
  private:
    int x, y;
    //metodos//comportamentos
  public:
    //constructor - Sem retorno, e mesmo nome da class
    Point();

    //metodos de acesso -- Getters and Setters
    //Setters:
    void SetX(int value);
    void SetY(int value);

    //Getters
    void ShowInfo();
  };
