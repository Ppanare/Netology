#pragma once
#include <iostream>
#include <string>

#define undOn "\033[4m"
#define undOff "\033[0m"

char red[] = {0x1b,'[','0',';','3','1','m',0};
char cyan[] = {0x1b,'[','0',';','3','6','m',0};


class abstract_figure
{
protected:
int side_a,side_b,side_c,side_d;
int angle_a,angle_b,angle_c,angle_d;
public:
abstract_figure(int side_a,int side_b,int side_c,int side_d,
                int angle_a,int angle_b,int angle_c,int angle_d);
virtual void information();
};

abstract_figure::abstract_figure(int side_a,int side_b,int side_c,int side_d,
                                 int angle_a,int angle_b,int angle_c,int angle_d)
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

void abstract_figure::information()
{
        std::cout<<"\nabstract_figure\nSides = "<<side_a<<" "<<side_b<<" "<<side_c<<" "<<side_d<<"\nAngles = "<<angle_a<<" "<<angle_b<<" "<<angle_c<<" "<<angle_d<<"\n";
}

class classic_triangle : public abstract_figure
{
protected:
int side_a,side_b,side_c;
int angle_a,angle_b,angle_c;
public:
    classic_triangle(int side_a,int side_b,int side_c,int angle_a,int angle_b,int angle_c);
    void information();
};

classic_triangle::classic_triangle(int side_a,int side_b,int side_c,int angle_a,int angle_b,int angle_c) :
abstract_figure(side_a,side_b,side_c,side_d,angle_a,angle_b,angle_c,angle_d)
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

class pr_triangle : public classic_triangle
{
public:
    pr_triangle(int side_a,int side_b,int side_c,int angle_a,int angle_b);
    void information();
};

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

class rb_triangle : public pr_triangle
{

public:
    rb_triangle(int side_a,int side_b,int angle_a, int angle_b);
    void information();
};

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

class rv_triangle : public rb_triangle
{

public:
    rv_triangle(int side_a);
    void information();
};

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


class classic_square : public abstract_figure
{
protected:
    int side_a,side_b,side_c,side_d,angle_a,angle_b,angle_c,angle_d;
public:
    classic_square(int side_a,int side_b,int side_c,int side_d,int angle_a,int angle_b,int angle_c,int angle_d);
    virtual void information();
};

classic_square::classic_square(int side_a,int side_b,int side_c,int side_d,int angle_a,int angle_b,int angle_c,int angle_d) : abstract_figure(side_a,side_b,side_c,side_d,angle_a,angle_b,angle_c,angle_d)
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

class pryam_square : public classic_square
{
public:
    pryam_square(int side_a,int side_c);
    void information();
};

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

class sq_square : public pryam_square
{
public:
    sq_square(int side_a);
    void information();
};

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

class pr_square : public classic_square
{
public:
    pr_square(int side_a,int side_b,int angle_a,int angle_b);
    void information();
};

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

class rb_square : public pr_square
{
public:
    rb_square(int side_a,int angle_a,int angle_b);
    void information();
};

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
