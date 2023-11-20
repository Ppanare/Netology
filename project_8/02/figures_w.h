#pragma once
#include <iostream>
#include <stdexcept>
#include <string>

class Figure
{
public:
    virtual ~Figure() {};
    virtual std::string get_name() const = 0;
    virtual int get_angles() const = 0;
    virtual void print_info() const = 0;
};

class Triangle : public Figure
{
protected:
    int angle_a,angle_b,angle_c;
    int side_a,side_b,side_c;
    std::string name = "Triangle";
public:
Triangle(int angle_a, int angle_b, int angle_c, int side_a, int side_b, int side_c) : angle_a(angle_a),angle_b(angle_b),angle_c(angle_c),side_a(side_a),side_b(side_b),side_c(side_c){

if(get_angles() != 180){
    throw std::invalid_argument("Invalid Triangle angles. The sum of angles should be equal 180");
    }
}
int get_angles() const override{
    return angle_a + angle_b + angle_c;
}
std::string get_name() const override{
    return name;
}
void print_info() const override{
    std::cout<<get_name()<<"\n";
    std::cout<<angle_a<<" "<<angle_b<<" "<<angle_c<<std::endl;
    std::cout<<side_a<<" "<<side_b<<" "<<side_c<<std::endl;
}
};

class RightTriangle : public Triangle
{
public:
    RightTriangle(int angle_a,int angle_b,int side_a,int side_b,int side_c): Triangle(angle_a,angle_b,90,side_a,side_b,side_c){
        name = "RightTriangle";
            if(angle_a + angle_b != 90){
                throw std::invalid_argument("Invalid right triangle angles. The sum of two angles must be 90 degrees");
            }
    }
};

class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle(int angle_a, int angle_b,int angle_c,int side_a,int side_b,int side_c) : Triangle(angle_a,angle_b,angle_c,side_a,side_b,side_c)
    {
        name = "IsoscelesTriangle";
        if(angle_a != angle_c) {
            throw std::invalid_argument("Invalid IsoscelesTriangle. baseAngle != equalAngle");
        }
    }
};
