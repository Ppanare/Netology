#include "triangles.h"

#define undOn "\033[4m"
#define undOff "\033[0m"

char red[] = {0x1b,'[','0',';','3','1','m',0};
char cyan[] = {0x1b,'[','0',';','3','6','m',0};


classic_triangle::classic_triangle(int side_a,int side_b,int side_c,int angle_a,int angle_b,int angle_c)
{
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_c;
    this->angle_a = angle_a;
    this->angle_b = angle_b;
    this->angle_c = angle_c;
}//прикол в задании сумма углов мб > 180

void classic_triangle::information()
{
    std::cout<<"\nclassic_triangle\nSides = "<<side_a<<" "<<side_b<<" "<<side_c<<"\nAngles = "<<angle_a<<" "<<angle_b<<" "<<angle_c<<"\n";
}


pr_triangle::pr_triangle(int side_a,int side_b,int side_c,int angle_a,int angle_b) : classic_triangle(side_a,side_b,side_c,angle_a,angle_b,angle_c)
{
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_c;
    this->angle_a = angle_a;
    this->angle_b = angle_b;
    this->angle_c = 90;
}

void pr_triangle::information()
{
    std::cout<<"\npr_triangle\nSides = "<<side_a<<" "<<side_b<<" "<<side_c<<"\nAngles = "<<angle_a<<" "<<angle_b<<" "<<angle_c<<"\n";
}



rb_triangle::rb_triangle(int side_a,int side_b,int angle_a,int angle_b) : pr_triangle(side_a,side_b,side_c,angle_a,angle_b)
{
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_a;
    this->angle_a = angle_a;
    this->angle_b = angle_b;
    this->angle_c = angle_a;
}

void rb_triangle::information()
{
    std::cout<<"\nrb_triangle\nSides = "<<side_a<<" "<<side_b<<" "<<side_c<<"\nAngles = "<<angle_a<<" "<<angle_b<<" "<<angle_c<<"\n";
}



rv_triangle::rv_triangle(int side_a) : rb_triangle(side_a,side_b,angle_a,angle_b)
{
    this->side_a = side_a;
    this->side_b = side_a;
    this->side_c = side_a;
    this->angle_a = 60;
    this->angle_b = 60;
    this->angle_c = 60;
}

void rv_triangle::information()
{
    std::cout<<"\nrv_triangle\nSides = "<<side_a<<" "<<side_b<<" "<<side_c<<"\nAngles = "<<angle_a<<" "<<angle_b<<" "<<angle_c<<"\n";
}
