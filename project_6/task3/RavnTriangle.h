#pragma once
#include <string>
#include <iostream>
#include "Triangle_h.h"
#include "CorrectTriangle.h"

class RavnTriangle : public CorrectTriangle
{
public:
	RavnTriangle(int side_1,int side_2,int angle_1,int angle_2);
};