#include "task_3_h.h"

void taskOne(){
double first,second;
bool cringe_exit = false;
    while(!cringe_exit){
    std::cout<<"input two integers - > ";
    std::cin>>first>>second;
    if(first != 0 && second != 0){
        Calculator* myCl = new Calculator{first,second};
            myCl->outPutAll();
            delete myCl;
            }
        else{std::cerr<<"Cringe error, im dying\n";}
    }
}

int main(){

    taskOne();
}
