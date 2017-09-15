#include <iostream>
#include <vector>

class Cube
{
public: 
  Cube(int size_x, int size_y, int size_z);
  ~Cube();

  void print_My_Cube();

  void set_Voxel(int x, int y, int z, int state);
  int get_voxel(int x, int y, int z);
  void clear_Voxel(int x, int y, int z);

  void set_Cube(int state);
  void clear_Cube();

private:
  std::vector<std::vector<std::vector<int>>> _cube;

  int _size_x;
  int _size_y;
  int _size_z;


};
