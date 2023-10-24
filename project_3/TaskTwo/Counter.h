#include <iostream>

class Counter{
private:
    int num;
public:
    Counter(int num){
        this->num = num;
    }
    Counter(){
        num = 1;
    }
    void plus(){
        this->num = num + 1;
    }
    void minus(){
        this->num = num - 1;
    }
    void out(){
        std::cout<<num<<std::endl;
    }
};


