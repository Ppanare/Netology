#include "PryamoUgolnik.h"

PryamoUgolnik::PryamoUgolnik(int side_1,int side_2,int side_3,int side_4,int angle_1,int angle_2,int angle_3,int angle_4) : Triangle(side_1,side_2,side_3,angle_1,angle_2,angle_3)
{
	this->side_1 = side_1;
	this->side_2 = side_2;
	this->side_3 = side_3;
	this->side_4 = side_4;
	
	this->angle_1 = angle_1;
	this->angle_2 = angle_2;
	this->angle_3 = angle_3;
	this->angle_4 = angle_4;
	
	name = "PryamoUgolnik";
}



bool PryamoUgolnik::check() 
{
	if((angle_1 + angle_2 + angle_3 + angle_4) == 360) return true; else return false;
}

void PryamoUgolnik::print_information()
{
	if(check()) {
		std::cout<<name<<std::endl;
		std::cout<<"Angles - > "<<angle_1<<" "<<angle_2<<" "<<angle_3<<" "<<angle_4<<std::endl;
		std::cout<<"Sides - > "<<side_1<<" "<<side_2<<" "<<side_3<<" "<<side_4<<std::endl;
	} else {std::cout<<"Incorrect - > "<<name<<std::endl;}
}