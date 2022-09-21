#include <iostream>
int main() {
double pi = 3.14159;
std::cout << "Pi = " << pi << '\n';
std::cout << "or " << 3.14/*Sem nada é double, se colocar 3.14f vira float*/ << " for short" << '\n';
}
