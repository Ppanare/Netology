#pragma once
#include <iostream>

#define ANGLES_OF_SQUARE 360
#define ANGLES_OF_TRIANGLE 180

class abstract_figure
{
protected:
    int side_a,side_b,side_c,side_d;
    int angle_a,angle_b,angle_c,angle_d;
    char* name;
    int amount_of_sides;
public:
    abstract_figure(int side_a,int side_b,int side_c,int side_d,
                    int angle_a,int angle_b,int angle_c,int angle_d);
    virtual bool check();
    virtual void print_info();
    virtual char* get_name() {return name;}
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

name = "abstract_figure";
amount_of_sides = 4;
}

bool abstract_figure::check()
{
    if((angle_a + angle_b + angle_c + angle_d) == ANGLES_OF_SQUARE) return true; else return false;
}

void abstract_figure::print_info()
{
    if(abstract_figure::check()){
        std::cout<<abstract_figure::get_name()<<std::endl;
        std::cout<<"sides - > "<<side_a<<" "<<side_b<<" "<<side_c<<" "<<side_d<<std::endl;
        std::cout<<"angles - > "<<angle_a<<" "<<angle_b<<" "<<angle_c<<" "<<angle_d<<std::endl;
    }
    else {
        std::cout<<"Corrupt - > "<<abstract_figure::get_name()<<std::endl;
        std::cout<<"sides - > "<<side_a<<" "<<side_b<<" "<<side_c<<" "<<side_d<<std::endl;
        std::cout<<"angles - > "<<angle_a<<" "<<angle_b<<" "<<angle_c<<" "<<angle_d<<std::endl;
    }
}


class triangle : public abstract_figure
{
public:
    triangle(int side_a,int side_b,int side_c,int angle_a,int angle_b,int angle_c);
    bool check();
    void print_info();
};

triangle::triangle(int side_a,int side_b,int side_c,int angle_a,int angle_b,int angle_c) : abstract_figure(side_a,side_b,side_c,side_d,
                                                                                                           angle_a,angle_b,angle_c,angle_d)
{
this->side_a = side_a;
this->side_b = side_b;
this->side_c = side_c;
this->angle_a = angle_a;
this->angle_b = angle_b;
this->angle_c = angle_c;

name = "triangle";
amount_of_sides = 3;
}

bool triangle::check()
{
    if((angle_a + angle_b + angle_c) == ANGLES_OF_TRIANGLE) return true; else return false;
}

void triangle::print_info()
{
    if(triangle::check()){
        std::cout<<triangle::get_name()<<std::endl;
        std::cout<<"sides - > "<<side_a<<" "<<side_b<<" "<<side_c<<" "<<std::endl;
        std::cout<<"angles - > "<<angle_a<<" "<<angle_b<<" "<<angle_c<<" "<<std::endl;
    }
    else {
        std::cout<<"Corrupt - > "<<triangle::get_name()<<std::endl;
        std::cout<<"sides - > "<<side_a<<" "<<side_b<<" "<<side_c<<" "<<std::endl;
        std::cout<<"angles - > "<<angle_a<<" "<<angle_b<<" "<<angle_c<<" "<<std::endl;
    }
}

class pr_triangle : public triangle
{
public:
    pr_triangle(int side_a,int side_b,int side_c,int angle_a,int angle_b);
};

pr_triangle::pr_triangle(int side_a,int side_b,int side_c,int angle_a,int angle_b) :triangle  (side_a,side_b,side_c,angle_a,angle_b,angle_c)
{
this->side_a = side_a;
this->side_b = side_b;
this->side_c = side_c;
this->angle_a = angle_a;
this->angle_b = angle_b;
this->angle_c = angle_a;

name = "pr_triangle";
amount_of_sides = 3;
}

class rn_triangle : public pr_triangle
{
public:
    rn_triangle(int side_a,int side_b,int side_c,int angle_a,int angle_b);
    bool check();
};

rn_triangle::rn_triangle(int side_a,int side_b,int side_c,int angle_a,int angle_b) : pr_triangle (side_a,side_b,side_c,angle_a,angle_b)
{
this->side_a = side_a;
this->side_b = side_b;
this->side_c = side_c;
this->angle_a = angle_a;
this->angle_b = angle_b;
this->angle_c = angle_a;

name = "rn_triangle";
amount_of_sides = 3;
}

bool rn_triangle::check()
{
    if(triangle::check() && (side_a == side_b)) return true; else return false;
}

class rv_triangle : public rn_triangle
{
public:
    rv_triangle(int side_a);
};

rv_triangle::rv_triangle(int side_a) : rn_triangle(side_a,side_b,side_c,angle_a,angle_b)
{
this->side_a = side_a;
this->side_b = side_a;
this->side_c = side_a;
this->angle_a = 60;
this->angle_b = 60;
this->angle_c = 60;

name = "rv_triangle";
amount_of_sides = 3;
}


class chetirehugolnik : public abstract_figure
{
public:
    chetirehugolnik(int side_a,int side_b,int side_c,int side_d,int angle_a,int angle_b,int angle_c,int angle_d);
};

chetirehugolnik::chetirehugolnik(int side_a,int side_b,int side_c,int side_d,int angle_a,int angle_b,int angle_c,int angle_d) : abstract_figure(side_a,side_b,side_c,side_d,angle_a,angle_b,angle_c,angle_d)
{
this->side_a = side_a;
this->side_b = side_b;
this->side_c = side_c;
this->side_d = side_d;

this->angle_a = angle_a;
this->angle_b = angle_b;
this->angle_c = angle_c;
this->angle_d = angle_d;

name = "chetirehugolnik";
amount_of_sides = 4;
}

class pryamougolnik : public chetirehugolnik
{
public:
    pryamougolnik(int side_a,int side_b,int side_c,int side_d,int angle_a);
    bool check();
};

pryamougolnik::pryamougolnik(int side_a,int side_b,int side_c,int side_d,int angle_a) : chetirehugolnik(side_a,side_b,side_c,side_d,angle_a,angle_b,angle_c,angle_d)
{
this->side_a = side_a;
this->side_b = side_b;
this->side_c = side_c;
this->side_d = side_d;

this->angle_a = angle_a;
this->angle_b = angle_a;
this->angle_c = angle_a;
this->angle_d = angle_a;

name = "pryamougolnik";
amount_of_sides = 4;
};

bool pryamougolnik::check()
{
    if(abstract_figure::check() && (angle_a == 90)) return true; else return false;
}

class kvadrat : public pryamougolnik
{
public:
    kvadrat(int side_a);
};

kvadrat::kvadrat(int side_a) : pryamougolnik(side_a,side_b,side_c,side_d,angle_a)
{
this->side_a = side_a;
this->side_b = side_a;
this->side_c = side_a;
this->side_d = side_a;

this->angle_a = 90;
this->angle_b = 90;
this->angle_c = 90;
this->angle_d = 90;

name = "kvadrat";
amount_of_sides = 4;
}


class parallelogram : public kvadrat
{
public:
    parallelogram(int side_a,int side_b,int side_c,int side_d,int angle_a,int angle_d);
    bool check();
};

parallelogram::parallelogram(int side_a,int side_b,int side_c,int side_d,int angle_a,int angle_d) : kvadrat(side_a)
{
this->side_a = side_a;
this->side_b = side_b;
this->side_c = side_c;
this->side_d = side_d;

this->angle_a = angle_a;
this->angle_b = angle_b;
this->angle_c = angle_a;
this->angle_d = angle_b;

name = "parallelogram";
amount_of_sides = 4;
}

bool parallelogram::check()
{
    if(abstract_figure::check() && (side_a == side_b) && (side_c == side_d)) return true; else return false;
}

class romb : public parallelogram
{
public:
    romb(int side_a,int angle_a,int angle_b);
    bool check();
};

romb::romb(int side_a,int angle_a,int angle_b) : parallelogram(side_a,side_b,side_c,side_d,angle_a,angle_d)
{
this->side_a = side_a;
this->side_b = side_a;
this->side_c = side_a;
this->side_d = side_a;

this->angle_a = angle_a;
this->angle_b = angle_b;
this->angle_c = angle_a;
this->angle_d = angle_b;

name = "romb";
amount_of_sides = 4;
}

bool romb::check()
{
    if(parallelogram::check() && abstract_figure::check()) return true; else return false;
}
