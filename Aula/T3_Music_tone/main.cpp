#include "configuration.hpp"

  using namespace std;

int main()
{
vector<size_t>notas
{
  E4,0,D4,CS4,C4,
E3,E3,E4,E3,E3,DS4,E3,E3,D4,CS4,C4,
E3,E3,B3,E3,E3,AS3,E3,E3,A3,E3,GS3,E3,G3,E3,FS3,F3,
E3,E3,E4,E3,E3,DS4,E3,E3,D4,CS4,C4,
E3,F3,B3,E3,F3,C4,E3,F3,
G3,FS3,E3,G3,FS3,E3,G3,FS3,
E3,F3,B3,E3,F3,C4,E3,F3,
CS4,E3,F3,C4,E3,F3,B3,B3,
E3,F3,B3,E3,F3,C4,E3,F3,
CS4,E3,F3,C4,E3,F3,B3,B3,
G3,FS3,E3,G3,FS3,E3,G3,FS3,
G3,FS3,E3,G3,FS3,E3,G3,FS3,E3
};
vector<size_t>tempos
{
  4,2,4,4,1,
8,8,8,8,8,8,8,8,4,4,2,
8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8,4,4,2,
8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8,1
};

Sheet master(1200,notas,tempos);


  return 0;
}
