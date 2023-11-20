#include <iostream>
#include <string>

int idiotic_function(std::string str,int cringe){
    if(cringe != str.length()) return str.length();
    else throw "well,shit happens";
}

int main(){
    bool cycle = false;
    while(!cycle){
    int stop;
    std::cout<<"input length - > ";std::cin>>stop; std::cout<<std::endl;
    std::string word;
    std::cout<<"Input word - > ";std::cin>>word;std::cout<<std::endl;
    try
    {
       int a = idiotic_function(word,stop);
    }
    catch (const char* error_message)
    {
        std::cout<<error_message<<std::endl;
        cycle = true;
    }
    }
}
