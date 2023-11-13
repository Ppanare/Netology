#include <iostream>


#define MODE 0

int sum(int a,int b){
    return a + b;
}

int main(){

#if MODE == 1
std::cout<<"works in the battle mode put 2 int - > ";
int a,b;
std::cin>>a>>b;
std::cout<<"answer = "<<sum(a,b)<<"\n";
#elif MODE == 0
std::cout<<"testmode...";
#elif MODE
std::cout<<"underfind mode"<<"\n";
#endif
}
