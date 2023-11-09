#pragma once
#include <iostream>



class simple_triangle
{
protected:
    int side_a,side_b,side_c;
    int angle_a,angle_b,angle_c;
    char* name;
    int amount_of_sides;
public:
    simple_triangle(int side_a,int side_b,int side_c,int angle_a,int angle_b,int angle_c);
    virtual bool check();
    virtual void print_info(bool hello);
};


simple_triangle::simple_triangle(int side_a,int side_b,int side_c,int angle_a,int angle_b,int angle_c)
{
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_c;

    this->angle_a = angle_a;
    this->angle_b = angle_b;
    this->angle_c = angle_c;
    this->amount_of_sides = 3;
    name = "simple_triangle";
}

void simple_triangle::print_info(bool hello)
{
    std::cout<<name<<std::endl;
    if(check()){std::cout<<"Correct figure"<<std::endl;} else std::cout<<"Uncorrect figure"<<std::endl;
    std::cout<<"Amount of sides "<<amount_of_sides<<std::endl;
    std::cout<<"ANGLES - > "<<angle_a<<" "<<angle_b<<" "<<angle_c<<std::endl;
    std::cout<<"SIDES - > "<<side_a<<" "<<side_b<<" "<<side_c<<std::endl;

}

bool simple_triangle::check()
{
    if((angle_a + angle_b + angle_c) != 180) return false; else return true;
}

class pr_triangle : public simple_triangle
{
public:
    pr_triangle(int side_a,int side_b,int side_c,int angle_a,int angle_b);
};

pr_triangle::pr_triangle(int side_a,int side_b,int side_c,int angle_a,int angle_b) : simple_triangle(side_a,side_b,side_c,angle_a,angle_b,angle_c)
{
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_c;

    this->angle_a = angle_a;
    this->angle_b = angle_b;
    this->angle_c = 90;
    this->amount_of_sides = 3;
    name = "pr_triangle";
}

class rb_triangle : public pr_triangle
{
public:
    rb_triangle(int side_a, int side_b,int angle_a,int angle_b);
};

rb_triangle::rb_triangle(int side_a, int side_b,int angle_a,int angle_b) : pr_triangle(side_a,side_b,side_c,angle_a,angle_b)
{
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_a;

    this->angle_a = angle_a;
    this->angle_b = angle_b;
    this->angle_c = angle_a;
    this->amount_of_sides = 3;
    name = "rb_triangle";
}

class rv_triangle : public rb_triangle
{
public:
    rv_triangle(int side_a);
};

rv_triangle::rv_triangle(int side_a) : rb_triangle(side_a,side_b,angle_a,angle_b)
{
    this->side_a = side_a;
    this->side_b = side_a;
    this->side_c = side_a;

    this->angle_a = 60;
    this->angle_b = angle_a;
    this->angle_c = angle_a;
    this->amount_of_sides = 3;
    name = "rv_triangle";
}


class simple_square
{
protected:
int side_a,side_b,side_c,side_d,angle_a,angle_b,angle_c,angle_d;
char* name;
int amount_of_sides;
public:
    simple_square(int side_a,int side_b,int side_c,int side_d,int angle_a,int angle_b,int angle_c,int angle_d);
    virtual void print_info(bool hello);
    virtual bool check();
};

simple_square::simple_square(int side_a,int side_b,int side_c,int side_d,int angle_a,int angle_b,int angle_c,int angle_d){
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_c;
    this->side_d = side_d;

    this->angle_a = angle_a;
    this->angle_b = angle_b;
    this->angle_c = angle_c;
    this->angle_d = angle_d;
    this->amount_of_sides = 4;
    name = "simple_square";
}

bool simple_square::check()
{
    if((angle_a + angle_b + angle_c + angle_d) != 360) return false; else return true;
}

void simple_square::print_info(bool hello)
{
    std::cout<<name<<std::endl;
    if(check()){std::cout<<"Correct figure"<<std::endl;} else std::cout<<"Uncorrect figure"<<std::endl;
    std::cout<<"Amount of sides "<<amount_of_sides<<std::endl;
    std::cout<<"ANGLES - > "<<angle_a<<" "<<angle_b<<" "<<angle_c<<" "<<angle_d<<std::endl;
    std::cout<<"SIDES - > "<<side_a<<" "<<side_b<<" "<<side_c<<" "<<side_d<<std::endl;
}

class pr_square : public simple_square
{
public:
    pr_square(int side_a,int side_b);
};

pr_square::pr_square(int side_a,int side_b) : simple_square(side_a,side_b,side_c,side_d,angle_a,angle_b,angle_c,angle_d)
{
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_a;
    this->side_d = side_b;

    this->angle_a = 90;
    this->angle_b = 90;
    this->angle_c = 90;
    this->angle_d = 90;
    this->amount_of_sides = 4;
    name = "pr_square";
}

class kv_square : public pr_square
{
public:
    kv_square(int side_a);
};

kv_square::kv_square(int side_a) : pr_square(side_a,side_b)
{
    this->side_a = side_a;
    this->side_b = side_a;
    this->side_c = side_a;
    this->side_d = side_a;

    this->angle_a = 90;
    this->angle_b = 90;
    this->angle_c = 90;
    this->angle_d = 90;
    this->amount_of_sides = 4;
    name = "kv_square";
}

class par_square : public simple_square
{
public:
    par_square(int side_a,int side_b,int angle_a,int angle_b);
};

par_square::par_square(int side_a,int side_b,int angle_a,int angle_b) : simple_square (side_a,side_b,side_c,side_d,angle_a,angle_b,angle_c,angle_d)
{
    this->side_a = side_a;
    this->side_b = side_b;
    this->side_c = side_a;
    this->side_d = side_b;

    this->angle_a = angle_a;
    this->angle_b = angle_b;
    this->angle_c = angle_a;
    this->angle_d = angle_b;
    this->amount_of_sides = 4;
    name = "kv_square";
}

class rom_square : public kv_square
{
public:
    rom_square(int side_a,int angle_a,int angle_b);
};

rom_square::rom_square(int side_a,int angle_a,int angle_b) : kv_square( side_a)
{
    this->side_a = side_a;
    this->side_b = side_a;
    this->side_c = side_a;
    this->side_d = side_a;

    this->angle_a = angle_a;
    this->angle_b = angle_b;
    this->angle_c = angle_a;
    this->angle_d = angle_b;
    this->amount_of_sides = 4;
    name = "rom_square";
}

