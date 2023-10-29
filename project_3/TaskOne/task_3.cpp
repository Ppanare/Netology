#include "task_3_h.h"

void taskOne(){
double first,second;
bool cringe_exit = false;
    while(!cringe_exit){
    std::cout<<"input two integers,(you can exit! type 0 0) - > ";
    std::cin>>first>>second;
    if(second != 0){
        Calculator* myCl = new Calculator{first,second};
            myCl->outPutAll();
            delete myCl;
            }
	if(second == 0 && first == 0) exit(0);
    if(second == 0){std::cerr<<"Cringe error, im dying\n";}
    }
}

int main(){

    taskOne();
}
