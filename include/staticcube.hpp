#ifndef INCLUDE_STATICCUBE_HPP_
#define INCLUDE_STATICCUBE_HPP_

#include <iostream>
#include <vector>

#define SIZE_X 9
#define SIZE_Y 9
#define SIZE_Z 9

class StaticCube
{
public: 
  StaticCube();
  ~StaticCube();

  void print_My_static_cube();

  void set_Static_Voxel(int x, int y, int z, int state);
  void set_Static_X_Line(int y, int z, int state);
  void set_Static_Y_Line(int x, int z, int state);
  void set_Static_Z_Line(int x, int y, int state);
  void set_Static_XY_Plane(int z, int state);
  void set_Static_XZ_Plane(int y, int state);
  void set_Static_YZ_Plane(int x, int state);

  void set_Static_Cube(int state);
  void set_Static_Cube_High();
  void set_Static_Cube_Low();

  void clear_Static_Voxel(int x, int y, int z);

  int get_Static_voxel(int x, int y, int z);
  std::vector<std::vector<std::vector<int>>> get_StaticCube();


private:
  std::vector<std::vector<std::vector<int>>> _static_cube;


};


#endif
