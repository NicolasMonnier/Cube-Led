#include "staticcube.hpp"

StaticCube::StaticCube()
{
  std::vector<std::vector<std::vector<int>>> vect(SIZE_X,std::vector<std::vector<int>>(SIZE_Y,std::vector<int>(SIZE_Z,0)));
  _static_cube = vect;
  vect.clear();
}

StaticCube::~StaticCube()
{
}


void StaticCube::print_My_static_cube()
{
  std::cout<<_static_cube[0][0][0]<<std::endl;
}




void StaticCube::set_Static_Voxel(int x, int y, int z, int state){
  _static_cube[x][y][z] = state;
}

void StaticCube::set_Static_X_Line(int y, int z, int state){
	for(int i = 0; i<SIZE_X; i++){
		StaticCube::set_Static_Voxel(i, y, z, state);
	}

}

void StaticCube::set_Static_Y_Line(int x, int z, int state){
	for(int j = 0; j<SIZE_Y; j++){
		StaticCube::set_Static_Voxel(x, j, z, state);
	}

}

void StaticCube::set_Static_Z_Line(int x, int y, int state){
	for(int k = 0; k<SIZE_Z; k++){
		StaticCube::set_Static_Voxel(x, y, k, state);
	}

}

void StaticCube::set_Static_XY_Plane(int z, int state){
	for(int i = 0; i<SIZE_X; i++){
		StaticCube::set_Static_Y_Line(i, z, state);
	}
}

void StaticCube::set_Static_XZ_Plane(int y, int state){
	for(int i = 0; i<SIZE_X; i++){
		StaticCube::set_Static_Z_Line(i, y, state);
	}
}

void StaticCube::set_Static_YZ_Plane(int x, int state){
	for(int j = 0; j<SIZE_Y; j++){
		StaticCube::set_Static_Z_Line(x, j, state);
	}
}

void StaticCube::set_Static_Cube(int state){
	for(int i = 0; i<SIZE_X; i++){
		StaticCube::set_Static_YZ_Plane(i, state);
	}
}

void StaticCube::set_Static_Cube_High(){
	StaticCube::set_Static_Cube(1);
}

void StaticCube::set_Static_Cube_Low(){


	StaticCube::set_Static_Cube(0);
}



int StaticCube::get_Static_voxel(int x, int y, int z){
  return(_static_cube[x][y][z]);
}

std::vector<std::vector<std::vector<int>>> StaticCube::get_StaticCube(){
	return _static_cube;
}


void StaticCube::clear_Static_Voxel(int x, int y, int z){
  StaticCube::set_Static_Voxel(x, y, z, 0);
}


