#include "squares.h"




classic_square::classic_square(int side_a,int side_b,int side_c,int side_d,int angle_a,int angle_b,int angle_c,int angle_d)
{
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_c;
    this->side_d = side_d;
    this->angle_a = angle_a;
    this->angle_b = angle_b;
    this->angle_c = angle_c;
    this->angle_d = angle_d;
}

void classic_square::information()
{
    std::cout<<"\nclassic_square\nSides = "<<side_a<<" "<<side_b<<" "<<side_c<<" "<<side_d<<"\nAngles = "<<angle_a<<" "<<angle_b<<" "<<angle_c<<" "<<angle_d<<"\n";
}


pryam_square::pryam_square(int side_a,int side_c) : classic_square(side_a,side_b,side_c,side_d,angle_a,angle_b,angle_c,angle_d)
{
    this->side_a = side_a;
    this->side_b = side_a;
    this->side_c = side_c;
    this->side_d = side_c;

    this->angle_a = 90;
    this->angle_b = 90;
    this->angle_c = 90;
    this->angle_d = 90;
}

void pryam_square :: information()
{
    std::cout<<"\npryam_square\nSides = "<<side_a<<" "<<side_b<<" "<<side_c<<" "<<side_d<<"\nAngles = "<<angle_a<<" "<<angle_b<<" "<<angle_c<<" "<<angle_d<<"\n";
}

sq_square::sq_square(int side_a) : pryam_square(side_a,side_b)
{
    this->side_a = side_a;
    this->side_b = side_a;
    this->side_c = side_a;
    this->side_d = side_a;

    this->angle_a = 90;
    this->angle_b = 90;
    this->angle_c = 90;
    this->angle_d = 90;
}

void sq_square::information()
{
    std::cout<<"\nsq_square\nSides = "<<side_a<<" "<<side_b<<" "<<side_c<<" "<<side_d<<"\nAngles = "<<angle_a<<" "<<angle_b<<" "<<angle_c<<" "<<angle_d<<"\n";
}

pr_square::pr_square(int side_a,int side_b,int angle_a,int angle_b) : classic_square (side_a,side_b,side_c,side_d,angle_a,angle_b,angle_c,angle_d)
{
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_a;
    this->side_d = side_b;
    this->angle_a = angle_a;
    this->angle_b = angle_b;
    this->angle_c = angle_a;
    this->angle_d = angle_b;
}

void pr_square::information()
{
    std::cout<<"\npr_square\nSides = "<<side_a<<" "<<side_b<<" "<<side_c<<" "<<side_d<<"\nAngles = "<<angle_a<<" "<<angle_b<<" "<<angle_c<<" "<<angle_d<<"\n";
}

rb_square::rb_square(int side_a,int angle_a,int angle_b) : pr_square(side_a,side_b,angle_a,angle_b)
{
    this->side_a = side_a;
    this->side_b = side_a;
    this->side_c = side_a;
    this->side_d = side_a;
    this->angle_a = angle_a;
    this->angle_b = angle_b;
    this->angle_c = angle_a;
    this->angle_d = angle_b;
}

void rb_square::information()
{
    std::cout<<"\nrb_square\nSides = "<<side_a<<" "<<side_b<<" "<<side_c<<" "<<side_d<<"\nAngles = "<<angle_a<<" "<<angle_b<<" "<<angle_c<<" "<<angle_d<<"\n";
}
