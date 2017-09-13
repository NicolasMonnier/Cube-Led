#include "cube.hpp"

Cube::Cube(int size_x, int size_y, int size_z):_size_x(size_x), _size_y(size_y), _size_z(size_z)
{
  std::vector<std::vector<std::vector<int>>> vect(size_x,std::vector<std::vector<int>>(size_y,std::vector<int>(size_z,5)));
  _vect = vect;
  vect.clear();
}

Cube::~Cube()
{
}

void Cube::print_My_Cube()
{
	std::cout<<_vect[0][0][0]<<std::endl;
}

