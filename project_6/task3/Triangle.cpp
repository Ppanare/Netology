#include "Triangle_h.h"

Triangle::Triangle(int side_1,int side_2,int side_3,int angle_1,int angle_2,int angle_3)
{
	this->side_1 = side_1;
	this->side_2 = side_2;
	this->side_3 = side_3;
	
	this->angle_1 = angle_1;
	this->angle_2 = angle_2;
	this->angle_3 = angle_3;
	
	name = "Triangle";
}

bool Triangle::check() 
{
	if((angle_1 + angle_2 + angle_3) == 180) return true; else return false;
}

void Triangle::print_information()
{
	if(check()) {
		std::cout<<name<<std::endl;
		std::cout<<"Angles - > "<<angle_1<<" "<<angle_2<<" "<<angle_3<<std::endl;
		std::cout<<"Sides - > "<<side_1<<" "<<side_2<<" "<<side_3<<std::endl;
	} else {std::cout<<"Incorrect - > "<<name<<std::endl;}
}