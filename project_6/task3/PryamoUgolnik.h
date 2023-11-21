#pragma once
#include <string>
#include <iostream>
#include "Triangle_h.h"

class PryamoUgolnik : public Triangle
{
	protected:
	int side_4;
	int angle_4;
public:
PryamoUgolnik(int side_1,int side_2,int side_3,int side_4,int angle_1,int angle_2,int angle_3,int angle_4);
bool check();
void print_information();
};