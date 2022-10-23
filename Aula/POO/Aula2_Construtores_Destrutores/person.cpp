#include "person.hpp"

Person::Person()
{
  cout<<" Initializing Person..."<<endl;
  m_name = NULL;
  m_adress = NULL;
  m_age = NULL;
  m_height = NULL;
  m_weight = NULL;
}

Person::Person(string name) : Person() // Esse person é pra rodar o person antes de
{                                      //Executar o código
  m_name = new string(name);

}

Person::Person(string name, string adress) : Person()
{
  m_name = new string(name);
  m_adress = new string(adress);
}

Person::Person(string name, string adress, unsigned int age, float height, float weight)
: Person()
{
  m_name = new string(name);
  m_adress = new string(adress);
  m_age = new unsigned int(age);
  m_height = new float(height);
  m_weight = new float(weight);
}

Person::~Person()
{
cout<<"Destructor called "<<endl;

if (m_name)  delete m_name;
if (m_adress)  delete m_adress;
if (m_age)  delete m_age;
if (m_height)  delete m_height;
if (m_weight)  delete m_weight;
}

void Person::ShowInfo()
{
  if(m_name) cout<<"Name:"<<*m_name<<endl;
}
