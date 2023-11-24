#pragma once
#include <string>
#include <iostream>
class Triangle
{
protected:
	std::string name;
	int side_1,side_2,side_3;
	int angle_1,angle_2,angle_3;
public:
	Triangle(int side_1,int side_2,int side_3,int angle_1,int angle_2,int angle_3);
	virtual void print_information();
	virtual bool check();
};