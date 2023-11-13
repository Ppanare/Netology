#include "Counter.h"

Counter::Counter(){
    this->integer = 1;
}

Counter::Counter(int integer){
    this->integer = integer;
}
void Counter::increment(){
    integer++;
}

void Counter::decrement(){
     integer--;
}

int Counter::output(){
     return integer;
}
