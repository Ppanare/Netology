#include <iostream>
#include <string>
#define undOn "\033[4m"
#define undOf "\033[0m"

char red[] = {0x1b,'[','0',';','3','1','m',0}; //<- красный цвет дороги нет
char cyan[] = {0x1b,'[','0',';','3','6','m',0}; //<- я не знаю что это за цвет для меня он серый


class DefaultTriangle
{
protected:
    int side_a,side_b,side_c;
    int angle_a,angle_b,angle_c;
    std::string  name;
public:
    DefaultTriangle(int side_a,int side_b,int side_c,int angle_a,int angle_b,int angle_c);
   virtual void print_information();
};



DefaultTriangle::DefaultTriangle(int side_a,int side_b,int side_c,int angle_a,int angle_b,int angle_c)
{
    this->name = "DefaultTriangle";
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_c;

    this->angle_a = angle_a;
    this->angle_b = angle_b;
    this->angle_c = angle_c;
}

void DefaultTriangle::print_information()
{
    if((angle_a + angle_b + angle_c) == 180){
    std::cout<<name<<"\n"<<"Sides - > "<<side_a<<","<<side_b<<","<<side_c<<std::endl;
    std::cout<<"Angles - > "<<angle_a<<","<<angle_b<<","<<angle_c<<std::endl;
    } else std::cout<<"Error in |"<<red<<undOn<<name<<undOf<<"| ->cannot create "<<cyan<<name<<undOf<<" you make a mistake in constructor<-\n"<<undOn<<"NOTE ->"<<cyan<<"check angles"<<undOf<<std::endl;
}

class PRtriangle : public DefaultTriangle
{
public:
PRtriangle(int side_a,int side_b,int side_c,int angle_a,int angle_b);
};

PRtriangle::PRtriangle(int side_a,int side_b,int side_c,int angle_a,int angle_b) : DefaultTriangle(side_a,side_b,side_c,angle_a,angle_b,angle_c)
{
    this->name = "PRtriangle";
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_c;

    this->angle_a = angle_a;
    this->angle_b = angle_b;
    angle_c = 90;
}

class RBtriangle : public PRtriangle
{
public:
    RBtriangle(int side_a,int side_b,int angle_a,int angle_b);
};
RBtriangle::RBtriangle(int side_a,int side_b,int angle_a,int angle_b) : PRtriangle(side_a,side_b,side_c,angle_a,angle_b)
{
    this->name = "RBtriangle";
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_a;

    this->angle_a = angle_a;
    this->angle_b = angle_b;
    this->angle_c = angle_a;
}

class RStriangle : public RBtriangle
{
public:
    RStriangle(int side_a);
};

RStriangle::RStriangle(int side_a) : RBtriangle(side_a,side_b,angle_a,angle_b)
{
    this->name = "RStriangle";
    this->side_a = side_a;
    this->side_b = side_a;
    this->side_c = side_a;
    this->angle_a = 60;
    this->angle_b = angle_a;
    this->angle_c = angle_a;
}

class ClassicSq : public DefaultTriangle
{
protected:
    int side_d;
    int angle_d;
public:
    ClassicSq(int side_a,int side_b);
     void print_information() override;

};

ClassicSq::ClassicSq(int side_a,int side_b) : DefaultTriangle(side_a,side_b,side_c,angle_a,angle_b,angle_c)
{
    this->side_a = side_a;
    this->side_c = side_a;
    this->side_b = side_b;
    this->side_d = side_b;
    this->angle_d = 90;
    this->angle_a = 90;
    this->angle_c = 90;
    this->angle_b = 90;
    this->name = "ClassicSq";
}

void ClassicSq::print_information()
{
    if((angle_a + angle_b + angle_c + angle_d) == 360){
    std::cout<<name<<"\n"<<"Sides - > "<<side_a<<","<<side_b<<","<<side_c<<","<<side_d<<std::endl;
    std::cout<<"Angles - > "<<angle_a<<","<<angle_b<<","<<angle_c<<","<<angle_d<<std::endl;
    } else std::cout<<"Error in |"<<red<<undOn<<name<<undOf<<"| ->cannot create "<<cyan<<name<<undOf<<" you make a mistake in constructor<-\n"<<undOn<<"NOTE ->"<<cyan<<"check angles"<<undOf<<std::endl;
}

class Kvadrat : public ClassicSq
{
public:
    Kvadrat(int side_a);
};

Kvadrat::Kvadrat(int side_a) : ClassicSq(side_a,side_b)
{
    this->side_a = side_a;
    this->side_b = side_a;
    this->side_c = side_a;
    this->side_d = side_a;

    this->angle_d = 90;
    this->angle_a = 90;
    this->angle_c = 90;
    this->angle_b = 90;
    this->name = "Kvadrat";
}

class PArallelogram : public ClassicSq
{
public:
    PArallelogram(int side_a,int side_d,int angle_a,int angle_b);
};

PArallelogram::PArallelogram(int side_a,int side_d,int angle_a,int angle_b) : ClassicSq(side_a,side_b)
{
    this->side_a = side_a;
    this->side_c = side_a;
    this->side_d = side_d;
    this->side_b = side_d;
    this->angle_a = angle_a;
    this->angle_b = angle_b;
    this->angle_c = angle_a;
    this->angle_d = angle_b;
    this->name = "PArallelogram";
}

class ROmb : public ClassicSq
{
public:
    ROmb(int side_a,int angle_a,int angle_b);
};

ROmb::ROmb(int side_a,int angle_a,int angle_b) : ClassicSq(side_a,side_b)   //душно
{
    this->side_a = side_a;
    this->side_b = side_a;
    this->side_c = side_a;
    this->side_d = side_a;
    this->angle_a = angle_a;
    this->angle_b = angle_b;
    this->angle_c = angle_a;
    this->angle_d = angle_b;
    this->name = "ROMB";
}
