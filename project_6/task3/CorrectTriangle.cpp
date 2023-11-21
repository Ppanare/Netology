#include "CorrectTriangle.h"

CorrectTriangle::CorrectTriangle(int side_1,int side_2,int side_3,int angle_1,int angle_2) : Triangle (side_1,side_2,side_3,angle_1,angle_2,90)
{
	this->side_1 = side_1;
	this->side_2 = side_2;
	this->side_3 = side_3;
	
	this->angle_1 = angle_1;
	this->angle_2 = angle_2;
	
	name = "CorrectTriangle";
}
