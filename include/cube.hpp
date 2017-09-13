#include <iostream>
#include <vector>

class Cube
{
public: 
  Cube(int size_x, int size_y, int size_z);
  ~Cube();
  void print_My_Cube();

private:
  std::vector<std::vector<std::vector<int>>> _vect;

  int _size_x;
  int _size_y;
  int _size_z;


};
