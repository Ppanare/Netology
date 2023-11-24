#include "RavnTriangle.h"

RavnTriangle::RavnTriangle(int side_1,int side_2,int angle_1,int angle_2) : CorrectTriangle (side_1,side_2,side_3,angle_1,angle_2)
{
	this->side_1 = side_1;
	this->side_2 = side_2;
	this->side_3 = side_1;
	this->angle_1 = angle_1;
	this->angle_2 = angle_2;
	this->angle_3 = angle_1;
	
	name = "RavnTriangle";
}