#include "Counter.h"

//крайне очевидно что я тут наговно-кодил  мб сделать просто метод с этим свитчем?


void make_a_choice(Counter& xd){
    int brakeMechanizm = 0;
    char desigion;
    while(brakeMechanizm == 0){
        std::cout<<"Input char + - = or 0 for exit\n";
        std::cin>>desigion;
        switch(desigion){
            case '+': xd.increment();break;
            case '-': xd.decrement();break;
            case '=': xd.output();break;
            case '0': brakeMechanizm = 1;break;
            default: std::cout<<"Miss char try again\n";
        }
    }
}


int main(){
std::cout<<"вы хотите задать значение?\nY/N";
char answer;
int integer;
char newAnswer;
std::cin>>answer;
if(answer == 'y'){
    std::cout<<"Input integer -> ";
    std::cin>>integer;
    Counter act_one{integer};
    make_a_choice(act_one);
}
if(answer == 'n'){
    Counter act_one{};
    make_a_choice(act_one);
}
}


