#pragma once
#include <iostream>
#include <string>




class classic_triangle
{
protected:
int side_a,side_b,side_c;
int angle_a,angle_b,angle_c;
public:
    classic_triangle(int side_a,int side_b,int side_c,int angle_a,int angle_b,int angle_c);
    virtual void information();
};

class pr_triangle : public classic_triangle
{
public:
    pr_triangle(int side_a,int side_b,int side_c,int angle_a,int angle_b);
    void information();
};

class rb_triangle : public pr_triangle
{

public:
    rb_triangle(int side_a,int side_b,int angle_a, int angle_b);
    void information();
};



class rv_triangle : public rb_triangle
{

public:
    rv_triangle(int side_a);
    void information();
};
