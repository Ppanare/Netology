#include <iostream>
#include <string>

class Simple_triangle
{
protected:
    int side_a,side_b,side_c;
    int angle_a,angle_b,angle_c;
    std::string name;
public:
    Simple_triangle();
   virtual void set_angles(int a, int b, int c) ;
   virtual void set_sides(int side_a,int side_b,int side_c);
    std::string get_name(){return name;}
    void printT();
};

Simple_triangle::Simple_triangle()
{
    name = "\nSIMPLE_TRIANGLE";
}

void  Simple_triangle::set_sides(int side_a,int side_b,int side_c)
{
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_c;
}

void  Simple_triangle::set_angles(int a, int b, int c)
{
    int answer = a + b + c;
    if(answer != 180){std::cout<<"Error->"<<answer<<" != 180\n";}
    angle_a = a;
    angle_b = b;
    angle_c = c;
}

void Simple_triangle::printT()
{
    std::cout<<get_name()<<std::endl;
    std::cout<<"Lines - >"<<side_a<<" "<<side_b<<" "<<side_c<<std::endl;
    std::cout<<"Angles - >"<<angle_a<<" "<<angle_b<<" "<<angle_c<<std::endl;
}

class R_triangle : public Simple_triangle
{
public:
    R_triangle();
   void set_angles(int a, int b, int c) override;
};

R_triangle::R_triangle()
{
    name = "\nRAVNOBEDRENNY TRIANGLE";
}


void  R_triangle::set_angles(int a, int b, int c)
{
    if(a != 90 && b != 90 && c != 90){
        std::cout<<"Error no one angle equal 90";
    }
    int answer = a + b + c;
    if(answer != 180){std::cout<<"Error->"<<answer<<" != 180\n";}
    angle_a = a;
    angle_b = b;
    angle_c = c;
}

class Ra_triangle : public Simple_triangle
{
    public:
    Ra_triangle();
    void set_angles(int a, int b, int c) override;
    void set_sides(int a, int b, int c) override;
};

Ra_triangle::Ra_triangle()
{
    name = "\nRAVNOSTORONNY TRIANGLE";
}

void Ra_triangle::set_angles(int a, int b, int c)
{
    if(a != 60 && b != 60 && c != 60){
        std::cout<<"Error all angles must be equal 60";
    }
    int answer = a + b + c;
    if(answer != 180){std::cout<<"Error->"<<answer<<" != 180\n";}
    angle_a = a;
    angle_b = b;
    angle_c = c;
}

void Ra_triangle::set_sides(int side_a, int side_b, int side_c)
{
    if(side_a != side_b && side_a != side_c)
    {
        std::cout<<"Error lines must be equal";
    } else
    {
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_c;
    }
}
