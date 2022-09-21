#include <iostream>
#include <string>
 int main(){

int n;
   std::cout<<"Minha casa omori?" <<std::endl;


std::cout<< "omori? digite 1. \n"<< "assistir a beecrowd? digite 2"<< std::endl;
std::cin >> n;

switch(n)
{
  case 1:
  std::cout << "fraco";
  break;

  case 2:
  std:: cout << "boa, lenda";
  break;
}
return 0;
}
