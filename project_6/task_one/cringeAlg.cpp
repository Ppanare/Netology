#include "cringeAlg.h"
#include <iostream>


int main(){
    int make_a_choise = 0;
    std::cout<< "Input \n1 for sum\n2 for umn\n3 for del\n4 for stepen\nHere-> ";
    std::cin>>make_a_choise;
    std::cout<<"\nInput two integers - > ";
    int a,b;
    std::cin>>a>>b;
    switch(make_a_choise){
        case 1:
            std::cout<<"answer - > "<<sum(a,b)<<std::endl;
            break;
        case 2:
            std::cout<<"answer - > "<<minus(a,b)<<std::endl;
            break;
        case 3:
            std::cout<<"answer - > "<<umn(a,b)<<std::endl;
            break;
        case 4:
            std::cout<<"answer - > "<<stepen(a,b)<<std::endl;
            break;
        default:
            std::cout<<"??????\n";
            break;
    }
}
