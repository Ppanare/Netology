#include "Counter.h"

int main(){
std::cout<<"input integer - > ";
int a;
std::cin>>a;
Counter* ct = new Counter{a};
ct->out();
ct->plus();
ct->out();
ct->minus();
ct->out();
delete ct;
}
