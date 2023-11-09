#include <iostream>

class Calculator{
private:
    double num1 = 1;
    double num2 = 1;
public:
bool set_num1(int num1);
bool set_num2(int num2);
double add();
double multiply();
double subtract_1_2();
double subtract_2_1();
double divide_1_2();
double divide_2_1();
inline void outPutAll(){
    std::cout<<"add()->"<<add()<<std::endl;;
    std::cout<<"multiply()->"<<multiply()<<std::endl;
    std::cout<<"subtract_1_2()->"<<subtract_1_2()<<std::endl;
    std::cout<<"subtract_2_1()->"<<subtract_2_1()<<std::endl;
    std::cout<<"divide_1_2()->"<<divide_1_2()<<std::endl;
    std::cout<<"divide_2_1()->"<<divide_2_1()<<std::endl;
}
};

bool Calculator::set_num1(int num1){          //<-----
if(num1 == 0) return false;
else{
    this->num1 = num1;
    return true;
}
}

bool Calculator::set_num2(int num2){
if(num2 == 0) return false;
else{
    this->num2 = num2;
    return true;
}
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
