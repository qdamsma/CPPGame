/*
 * Utils.cpp
 *
 *  Created on: 18 sep. 2025
 *      Author: QuintenDamsma
 */
#include "Utils.h"
#include <cmath>


bool IsEqual(float x, float y){
	return fabsf(x - y) < EPSILON;
}

bool IsGreatherThanOrEqual(float x, float y){
	return x > y || IsEqual(x, y);
}

bool IsLessThanOrEqual(float x, float y){
	return x < y || IsEqual(x, y);
}
