#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>

using namespace std;

  class Person
  {
  private:
    string *m_name;
    string *m_adress;
    unsigned int *m_age;
    float *m_height;
    float *m_weight;

    /*
    1- No default - todo mundo nulo
    2 - EM cada construtor de sobrecarga, alocar com new
    3- no destrutor, desalocar o que foi alocado, com delete
     */
  public:
    Person();
    Person(string name);
    Person(string name, string adress);
    Person(string name, string adress, unsigned int age, float height, float weight);

    void ShowInfo();
    ~Person();
  };



#endif
