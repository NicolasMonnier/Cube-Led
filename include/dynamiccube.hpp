/*
 * dynamiccube.hpp
 *
 *  Created on: 17 sept. 2017
 *      Author: nicolas
 */

#ifndef INCLUDE_DYNAMICCUBE_HPP_
#define INCLUDE_DYNAMICCUBE_HPP_

#include "staticcube.hpp"

class DynamicCube
{
public:
	DynamicCube();
	~DynamicCube();

private:
	StaticCube _cube();

};

#endif /* INCLUDE_DYNAMICCUBE_HPP_ */
