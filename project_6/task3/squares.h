
#pragma once
#include <iostream>
#include <string>




class classic_square
{
protected:
    int side_a,side_b,side_c,side_d,angle_a,angle_b,angle_c,angle_d;
public:
    classic_square(int side_a,int side_b,int side_c,int side_d,int angle_a,int angle_b,int angle_c,int angle_d);
    virtual void information();
};

class pryam_square : public classic_square
{
public:
    pryam_square(int side_a,int side_c);
    void information();
};


class sq_square : public pryam_square
{
public:
    sq_square(int side_a);
    void information();
};

class pr_square : public classic_square
{
public:
    pr_square(int side_a,int side_b,int angle_a,int angle_b);
    void information();
};


class rb_square : public pr_square
{
public:
    rb_square(int side_a,int angle_a,int angle_b);
    void information();
};

