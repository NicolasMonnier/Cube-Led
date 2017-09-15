#include "cube.hpp"

Cube::Cube(int size_x, int size_y, int size_z):_size_x(size_x), _size_y(size_y), _size_z(size_z)
{
  std::vector<std::vector<std::vector<int>>> vect(size_x,std::vector<std::vector<int>>(size_y,std::vector<int>(size_z,0)));
  _cube = vect;
  vect.clear();
}

Cube::~Cube()
{
}


void Cube::print_My_Cube()
{
  std::cout<<_cube[0][0][0]<<std::endl;
}

void Cube::set_Voxel(int x, int y, int z, int state){
  _cube[x][y][z] = state;
}

int Cube::get_voxel(int x, int y, int z){
  return(_cube[x][y][z]);
}

void Cube::clear_Voxel(int x, int y, int z){
  Cube::set_Voxel(x, y, z, 0);
}

void Cube::set_Cube(int state){

}
