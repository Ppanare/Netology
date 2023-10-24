#include <iostream>

class Calculator{
private:
    double num1;
    double num2;
public:
Calculator();
Calculator(double num1,double num2);
double add();
double multiply();
double subtract_1_2();
double subtract_2_1();
double divide_1_2();
double divide_2_1();
inline void outPutAll(){
    std::cout<<"add()->"<<add()<<std::endl;;
    std::cout<<"multiply()->"<<subtract_1_2()<<std::endl;
    std::cout<<"subtract_2_1()->"<<subtract_2_1()<<std::endl;
    std::cout<<"divide_1_2()->"<<divide_1_2()<<std::endl;
    std::cout<<"divide_2_1()->"<<divide_2_1()<<std::endl;
}
};

Calculator::Calculator(){
    this->num1 = 0;
    this->num2 = 0;
}

Calculator::Calculator(double num1,double num2){
    this->num1 = num1;
    this->num2 = num2;
}

double Calculator::add(){
    return num1 + num2;
}

double Calculator::multiply(){
    return num1 * num2;
}

double Calculator::subtract_1_2(){
    return num1 - num2;
}

double Calculator::subtract_2_1(){
    return num2 - num1;
}

double Calculator::divide_1_2(){
    return num1 / num2;
}

double Calculator::divide_2_1(){
    return num2 / num1;
}
