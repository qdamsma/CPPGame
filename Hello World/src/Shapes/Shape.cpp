/*
 * Shape.cpp
 *
 *  Created on: 25 sep. 2025
 *      Author: QuintenDamsma
 */

#include "Shape.h"

void Shape::MoveBy(const Vec2D& deltaOffset)
{
	for(Vec2D& point : mPoints)
	{
		point = point + deltaOffset;
	}
}
