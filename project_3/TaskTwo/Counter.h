#include <iostream>

class Counter{
  int integer;
public:
    Counter();
    Counter(int integer);
    void increment();
    void decrement();
    void output();
};



Counter::Counter(){
    this->integer = 1;
}

Counter::Counter(int integer){
    this->integer = integer;
}
void Counter::increment(){
    integer++;
    std::cout<<integer<<"\n";
}

void Counter::decrement(){
     integer--;
     std::cout<<integer<<"\n";
}

void Counter::output(){
     std::cout<<"Your integer equals ->"<< integer<<"\n";
}

