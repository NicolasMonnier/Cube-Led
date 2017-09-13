#include <iostream>
#include "cube.hpp"


int main(void)
{
  Cube instance(5,5,5);
  instance.print_My_Cube();

  std::cout<<"Hello !"<<std::endl;
  std::cout<<"c'est moi!"<<std::endl;
  return 0;
}
