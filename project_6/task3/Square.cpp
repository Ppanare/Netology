#include "Square.h"

Square::Square(int side_1,int angle_1) : PryamoUgolnik(side_1,side_2,side_3,side_4,angle_1,90,90,90)
{
	this->side_1 = side_1;
	this->side_2 = side_1;
	this->side_3 = side_1;
	this->side_4 = side_1;
	
	this->angle_1 = angle_1;	
	name = "Square";
}