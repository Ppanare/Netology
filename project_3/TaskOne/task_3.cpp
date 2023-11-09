#include "task_3_h.h"


int main(){

    Calculator clc;
    while(true){
    int a,b;
    std::cout<<"Input two integers - > ";std::cin >> a >> b;
    if(clc.set_num1(a) && clc.set_num2(b)) {clc.outPutAll();} else {std::cout<< "You make a mistake set_num1 == 0 or set_num2 == 0\n"; break;}
    }
}
